#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic{
    class Scientist: public Player{
    public:
        Scientist(Board& b, City c, int cards):Player(b,c){}  
        Scientist& discover_cure(Color);
        const std::string role() const{
            return "Scientist";
        }
    };
}