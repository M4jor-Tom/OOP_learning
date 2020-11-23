#pragma once
#include "../Headers/main.h"

using namespace std;

class ColoredPoint :
    public Point
{
private:
    string _color;
public:
    ColoredPoint();
    ColoredPoint(int x, int y, string color);
    virtual ~ColoredPoint();

    void display() override;
};

