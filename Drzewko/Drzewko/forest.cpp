#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>

#include "forest.hpp"
using namespace std;


Forest::Forest(int height, int width) {
    forest_height = height;
    forest_width = width; 
    tab = new int* [height];
    for (int i = 0; i < height; i++) {
        tab[i] = new int[width];
        for (int j = 0; j < width; j++) {
            tab[i][j] = ' ';

        }
    }
}



void Forest::PrintForest() {
    if (u == 0) {
        for (int i = 0; i < forest_height; i++) {
            for (int j = 0; j < forest_width; j++) {
                if (tab[i][j] != ' ') {
                    cout << "\033[1;32m";
                }
                cout << tab[i][j];
                cout << "\033[0m";
            }
                cout << std::endl;
            }
        }
    
    else {
        for (int i = 0; i < forest_height + xx; i++) {
            for (int j = 0; j < forest_width + yy; j++) {
                cout << tab[i][j] << ' ';
            }
        }
    }
}
Forest::~Forest() {
    cout << "Kasuje las\n" << endl;
    for (int i = 0; i < forest_height; i++) {
        delete[] tab[i];
    }
    delete[] tab;
    for (auto t : trees) {
        delete t;
    }
    trees.clear();
}

Forest& Forest::operator+=(Shape* sh) {
    this->AddShape(sh, sh->y, sh->x);
    return *this;
}

void Forest::AddShape(Shape* sh, int y, int x)
{
    int i, j;
    sh->x = x;
    sh->y = y;

    trees.push_back(sh);

    for (j = 0; j < sh->height; j++)
        for (i = 0; i < sh->width; i++)
            if (sh->tab[j][i])
                tab[j + y][i + x] = sh->tab[j][i] * trees.size();


}
