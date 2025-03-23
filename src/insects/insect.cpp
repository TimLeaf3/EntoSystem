//
//  insect.cpp
//  EntoSystem
//
//  Created by Tim Le Flem on 23/03/2025.
//

#include "insect.hpp"
#include "ant.hpp"

void Insect::render(SDL_Renderer *renderer) {
    for (auto &ant : *Ant::ants) {
        ant.render(renderer);
    }
}
