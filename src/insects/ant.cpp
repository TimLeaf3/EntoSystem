//
//  ant.cpp
//  EntoSystem
//
//  Created by Tim Le Flem on 23/03/2025.
//

#include "ant.hpp"

std::unique_ptr<std::vector<std::unique_ptr<Ant>>> Ant::ants =
    std::make_unique<std::vector<std::unique_ptr<Ant>>>();

Ant::Ant(vector _pos) : Insect(_pos) {
    loadedSurface = IMG_Load("Documents/assets/insects/lasius_niger.png");

    texture = SDL_CreateTextureFromSurface(Game::renderer, loadedSurface);

    (SDL_SetTextureScaleMode(texture, SDL_SCALEMODE_NEAREST));

    SDL_DestroySurface(loadedSurface);
}

void Ant::addAnt() { Ant::ants->push_back(std::make_unique<Ant>(this->pos)); }

void Ant::render(SDL_Renderer *renderer) {
    SDL_RenderTextureRotated(renderer, texture, nullptr, &shape, angle, nullptr,
                             SDL_FLIP_NONE);
}
