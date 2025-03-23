//
//  insect.cpp
//  EntoSystem
//
//  Created by Tim Le Flem on 23/03/2025.
//

#include "insect.hpp"

std::unique_ptr<std::vector<Insect>> Insect::insects =
    std::make_unique<std::vector<Insect>>();

void Insect::render(SDL_Renderer *renderer) {
    //
}
