#include "../Headers/ColoredPoint.h"

using namespace std;

ColoredPoint::ColoredPoint(): _color("")
{
	cout << "ColoredPoint null creation" << endl;
}

ColoredPoint::ColoredPoint(int x, int y, string color): Point(x, y), _color(color)
{
	cout << "ColoredPoint created with ";
	display();
}

ColoredPoint::~ColoredPoint()
{
	cout << "ColoredPoint destruction" << endl;
}

void ColoredPoint::display()
{
	cout << "x: " << _x << " y: " << _y << " color: " << _color << endl;
}
