//
//  terrain.cpp
//  EntoSystem
//
//  Created by Tim Le Flem on 23/03/2025.
//

#include "terrain.hpp"

void ter::generate(SDL_Renderer *renderer) {
    for (int i = 0; i < Game::w(); i += ter::tileSize) {
        for (int j = 0; j < Game::h(); j += ter::tileSize) {

            SDL_FRect rect = {(float)i, (float)j, ter::tileSize, ter::tileSize};
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            SDL_RenderFillRect(renderer, &rect);
        }
    }
}
