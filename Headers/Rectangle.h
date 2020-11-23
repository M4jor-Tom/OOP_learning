#pragma once
#include "../Headers/main.h"

class Rectangle :
    public GraphicObject
{
private:
    Point _topLeftAngle, _botRightAngle;
public:
    Rectangle();
    Rectangle(Point topLeft, Point botRight);
    virtual ~Rectangle();

    virtual void display() override;
};