#include <iostream>
#include "tree.hpp"

Tree::Tree(int h, int w, char s, string c) : Rectangle(h, s, c) {
    cout << "Konstruktor tree z parametrami\n";
    width = w;
    Alloc();
    Fill();
}
Tree::Tree(int h, char s, string c) : Rectangle(h, s, c) {
    cout << "Konstruktor prostok¹tny z parametrami\n";
    width = h;
    Alloc();
    Fill();
}


void Tree::Fill() {
    for (int j = 0; j < height; j++) {
        for (int i = 0; i < 2*height-1; i++) {
            tab[j][i] = 1;
        }
    }
}