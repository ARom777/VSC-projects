#include "structs.h"
#include "func.h"
#include <iostream>
#include <math.h>

void inputPointCoordinates(Point &p)
{
    std::cout << "������ ���न���� X � � �窨: ";
    std::cin >> p.x >> p.y;
}

void outputPointCoordinates(const Point &p)
{
    std::cout << "���न���� �窨: (" << p.x << ", " << p.y << ")" << std::endl;
}

void readCircle(Circle &c)
{
    inputPointCoordinates(c.center);
    std::cout << "������ ࠤ��� ��㣠: ";
    std::cin >> c.radius;
}

void writeCircle(const Circle &c)
{
    std::cout << "���������� �� ����������" << std::endl;
    outputPointCoordinates(c.center);
    std::cout << "������: " << c.radius << std::endl;
    std::cout << "����� ���㦭���: " << lengthCircle(c.radius) << std::endl;
    std::cout << "���頤� ���㦭���: " << areaCircle(c.radius) << std::endl;
    std::cout << "========================" << std::endl;
}

double lengthCircle(double rad)
{
    if (rad > 0) {
        double length = 2 * M_PI * rad;
        return length;
    } else {
        std::cerr << "������ ������ ���� ������ ����!!! ��������� ������������� �������� ������ �� 0";
        return 0;
    }
    
}

double areaCircle(double rad)
{
    if (rad > 0) {
        double area = M_PI * rad * rad;
        return area;
    } else {
        std::cerr << "������ ������ ���� ������ ����!!! ��������� ������������� �������� ������ �� 0";
        return 0;
    }
}

void readSquare(Square &s)
{
}

void writeSquare(const Square &s)
{
}

double perimeterSquare(double lengthSide)
{
    return 0.0;
}

double areaSquare(double lengthSide)
{
    return 0.0;
}

bool pointInCicrle(const Point &p, const Circle &c)
{
    return false;
}

bool pointInSquare(const Point &p, const Square &s)
{
    return false;
}

bool pointOnCicrle(const Point &p, const Circle &c)
{
    return false;
}

bool pointOnSquare(const Point &p, const Square &s)
{
    return false;
}

bool intersectionOfCircles(const Circle &c1, const Circle &c2)
{
    return false;
}

bool intersectionOfSquares(const Square &s1, const Square &s2)
{
    return false;
}

bool intersectionOfCicrleSquare(const Circle &c, const Square &s)
{
    return false;
}

bool belongingCircles(const Circle &inner, const Circle &outer)
{
    return false;
}

bool belongingSquares(const Square &inner, const Square &outer)
{
    return false;
}

bool belongingSquareToCircle(const Square &sInner, const Circle &cOuter)
{
    return false;
}

bool belongingCicrleToSquare(const Circle &cInner, const Square &sOuter)
{
    return false;
}