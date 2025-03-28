//
//  main.cpp
//  EntoSystem
//
//  Created by Tim Le Flem on 22/03/2025.
//

#include "ant.hpp"
#include "game.hpp"
#include "includes.hpp"

int main() {
    std::unique_ptr<Game> game = std::make_unique<Game>();

    std::unique_ptr<Ant> ant = Ant::create({90, 90});
    ant->addAnt();

    for (auto &a : *Ant::ants) {
        a->rotate(50);
    }

    game->loop();

    return 0;
}
