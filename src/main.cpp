//
//  main.cpp
//  EntoSystem
//
//  Created by Tim Le Flem on 22/03/2025.
//

#include "includes.hpp"
#include "game.hpp"

int main() {
    std::unique_ptr<Game> game = std::make_unique<Game>();
    
    game->loop();

    return 0;
}
