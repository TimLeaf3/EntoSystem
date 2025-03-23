//
//  game.cpp
//  EntoSystem
//
//  Created by Tim Le Flem on 22/03/2025.
//

#include "game.hpp"
#include "terrain.hpp"

const vector Game::windowSize = {820, 620};

int Game::loop() {
    if (!init()) {
        return -1;
    }

    while (runs) {
        handleEvents();
        update();
        render();
    }

    close();
    return 0;
}

bool Game::init() {

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        cerr << "SDL_Init Error: " << SDL_GetError() << endl;
        return false;
    }

    window = SDL_CreateWindow("EntoSystem", windowSize.x, windowSize.y,
                              SDL_WINDOW_RESIZABLE);
    if (window == nullptr) {
        cerr << "SDL_CreateWindow Error: " << SDL_GetError() << endl;
        SDL_Quit();
        return false;
    }

    renderer = SDL_CreateRenderer(window, nullptr);
    if (renderer == nullptr) {
        cerr << "SDL_CreateRenderer Error: " << SDL_GetError() << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return false;
    }

    runs = true;
    return true;
}

void Game::handleEvents() {
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_EVENT_QUIT) {
            runs = false;
        }
    }
}

void Game::update() {

    // Update game logic here

    // End of game logic
}

void Game::render() {
    SDL_SetRenderDrawColor(renderer, back.r, back.g, back.b, 255);
    SDL_RenderClear(renderer);

    // Render game here

    ter::generate(renderer);

    // End of rendering

    SDL_RenderPresent(renderer);
}

void Game::close() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
