//
//  ant.cpp
//  EntoSystem
//
//  Created by Tim Le Flem on 23/03/2025.
//

#include "ant.hpp"

void Ant::render(SDL_Renderer *renderer) {

    SDL_FRect rect = {pos.x, pos.y, 16, 16};
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &rect);
}
