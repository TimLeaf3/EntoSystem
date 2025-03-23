//
//  terrain.cpp
//  EntoSystem
//
//  Created by Tim Le Flem on 23/03/2025.
//

#include "terrain.hpp"

void ter::generate(SDL_Renderer *renderer) {
    for (int i = 0; i < Game::w(); i += ter::size) {
        for (int j = 0; j < Game::h(); j += ter::size) {

            if ((i / ter::size) % 5 == 0 && (j / ter::size) % 5 == 0) {

                SDL_FRect rect = {(float)i, (float)j, ter::size, ter::size};
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
                SDL_RenderFillRect(renderer, &rect);
            }
        }
    }
}
