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

    Ant x = Ant({Game::w() / 2, Game::h() / 2});
    x.addAnt();

    game->loop();

    return 0;
}
