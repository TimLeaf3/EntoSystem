//
//  terrain.cpp
//  EntoSystem
//
//  Created by Tim Le Flem on 23/03/2025.
//

#include "terrain.hpp"

void Terrain::init() {
    loadedTexture = IMG_Load("Documents/assets/terrain/dirt.png");
    dirt = SDL_CreateTextureFromSurface(Game::renderer, loadedTexture);

    SDL_SetTextureScaleMode(dirt, SDL_SCALEMODE_NEAREST);

    SDL_DestroySurface(loadedTexture);
}

void Terrain::generate(SDL_Renderer *renderer) {
    for (int x = 0; x < Game::w(); x += tileSize) {
        for (int y = 0; y < Game::h(); y += tileSize) {
            shape = {(float)x, (float)y, tileSize, tileSize};
            SDL_RenderTexture(renderer, dirt, nullptr, &shape);
        }
    }
}
