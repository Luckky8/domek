
#include <vector>
#include "shape.hpp"

using namespace std;

class Forest {
public:
    int forest_height, forest_width;
    vector<Shape*> trees;
    int** tab;
    int u, xx, yy;
    Forest(int height, int width);
    ~Forest();
    void AddShape(Shape* sh, int y, int x);
    void PrintForest();

    Forest& operator+=(Shape* sh);
};