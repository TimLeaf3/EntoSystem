//
//  ant.cpp
//  EntoSystem
//
//  Created by Tim Le Flem on 23/03/2025.
//

#include "ant.hpp"

std::unique_ptr<std::vector<Ant>> Ant::ants =
    std::make_unique<std::vector<Ant>>();

Ant::Ant(vector _pos) : Insect(_pos) {
    texture =
        IMG_LoadTexture(Game::renderer, "Documents/assets/insects/ant.bmp");
}

void Ant::addAnt() { Ant::ants->push_back(*this); }

void Ant::render(SDL_Renderer *renderer) {
    SDL_RenderTexture(Game::renderer, texture, nullptr, &shape);
}
