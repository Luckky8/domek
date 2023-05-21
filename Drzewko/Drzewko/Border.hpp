#pragma once

#include "rectangle.hpp"

class Border : public Rectangle
{
public:
    int marg;

    Border(int h, int w, char s, string c, int m);
    Border(const Rectangle& p, int m);
    void Cut();
};
