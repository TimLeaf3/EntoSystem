//
//  map.cpp
//  Terrain_Generation_SDL3
//
//  Created by Tim Le Flem on 06/13/0105.
//

#include "map.hpp"
#include "game.hpp"

Map::Map(const std::vector<std::vector<int>> &grid) { this->grid = grid; }

int &Map::at(std::size_t x, std::size_t y) { //
    return grid[y][x];
}

const int &Map::at(std::size_t x, std::size_t y) const { //
    return grid[y][x];
}

void Map::render(SDL_Renderer *renderer) {
    size_t maxWidth = 0;

    // Find the widest row
    for (size_t y = 0; y < this->size(); y++) {
        maxWidth = std::max(maxWidth, this->sizeAt(int(y)));
    }

    for (size_t y = 0; y < this->size(); y++) {
        for (size_t x = 0; x < this->sizeAt(int(y)); x++) {

            switch (at(x, y)) {
            case 0:
                SDL_SetRenderDrawColor(renderer, 70, 110, 90, 255);
                break;

            case 1:
                SDL_SetRenderDrawColor(renderer, 155, 50, 50, 255);
                break;

            case 2:
                SDL_SetRenderDrawColor(renderer, 50, 100, 100, 255);
                break;

            default:
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
                break;
            }

            SDL_RenderFillRect(renderer,
                               new SDL_FRect{
                                   float(Game::w() / maxWidth * x), //
                                   float(Game::h() / size() * y),   //
                                   float(Game::w() / maxWidth),     //
                                   float(Game::h() / size())        //
                               });
        }
    }
}

// ostream operator
std::ostream &operator<<(std::ostream &os, const Map &map) {
    std::cout << '{';

    for (int y = 0; y < map.size(); y++) {
        for (int x = 0; x < map.sizeAt(y); x++) {
            if (x == map.sizeAt(y) - 1 && y == map.size() - 1) {
                os << "  " << map.at(x, y) << ' ' << '}';
            } else if (x == 0 && y == 0) {
                os << ' ' << map.at(x, y) << ',';
            } else {
                os << "  " << map.at(x, y) << ',';
            }
        }
        os << '\n';
    }
    return os;
}
