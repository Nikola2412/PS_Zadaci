
#pragma once
#include <iostream>
#include <string>

struct Direction
{
    int x, y;
};

struct Coordinate
{
    int x, y;

    void move(Direction dir)
    {
        this->x += dir.x;
        this->y += dir.y;
    }

    std::string printInfo()
    {
        return std::to_string(x) + " " + std::to_string(y);
    }
};
