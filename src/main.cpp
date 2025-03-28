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

    for (int i = 0; i < 10; i++) {
        int x = (30 + std::rand() % (800 - 30 + 1));
        int y = (30 + std::rand() % (800 - 30 + 1));

        std::unique_ptr<Ant> ant = Ant::create({float(x), float(y)});
        ant->addAnt();
    }

    for (auto &a : *Ant::ants) {
        int r = (0 + std::rand() % (360 - 0 + 1));
        a->rotate(r);
    }

    game->loop();

    return 0;
}
