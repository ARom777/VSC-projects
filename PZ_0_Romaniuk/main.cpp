#include <iostream>
#include "structs.h"
#include "func.h"

int main() {
    Point point;
    inputPointCoordinates(point);
    outputPointCoordinates(point);
    Circle circle;
    readCircle(circle);
    writeCircle(circle);
    return 0;
}
