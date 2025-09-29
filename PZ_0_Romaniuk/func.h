#ifndef FUNC_H
#define FUNC_H
#include "structs.h"

void inputPointCoordinates(Point &p);
void outputPointCoordinates(const Point &p);

void readCircle(Circle &c);
void writeCircle(const Circle &c);
double lengthCircle(double rad);
double areaCircle(double rad);

void readSquare(Square &s);
void writeSquare(const Square &s);
double perimeterSquare(double lengthSide);
double areaSquare(double lengthSide);

bool pointInCicrle(const Point &p, const Circle &c);
bool pointInSquare(const Point &p, const Square &s);

bool pointOnCicrle(const Point &p, const Circle &c);
bool pointOnSquare(const Point &p, const Square &s);

bool intersectionOfCircles(const Circle &c1, const Circle &c2);
bool intersectionOfSquares(const Square &s1, const Square &s2);
bool intersectionOfCicrleSquare(const Circle &c, const Square &s);

bool belongingCircles(const Circle &inner, const Circle &outer);
bool belongingSquares(const Square &inner, const Square &outer);
bool belongingSquareToCircle(const Square &sInner, const Circle &cOuter);
bool belongingCicrleToSquare(const Circle &cInner, const Square &sOuter);

#endif