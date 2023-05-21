#include <iostream>
#include "rectangle.hpp"

Rectangle::Rectangle(int h, int w, char s, string c) : Shape(h, s, c) {
    cout << "Konstruktor rectangle z parametrami\n";
    width = w;
    Alloc();
    Fill();
}

Rectangle::Rectangle(int h, char s, string c) : Shape(h, s, c) {
    cout << "Konstruktor rectangle z parametrami bez h, czyli square\n";
    width = h;
    Alloc();
    Fill();
}

void Rectangle::Fill() {
    for (int j = 0; j < height; j++) {
        for (int i = 0; i < width; i++) {
            tab[j][i] = 1;
        }
    }
}
void Rectangle::setXY(int x, int y) {
    this->x = x;
    this->y = y;
}