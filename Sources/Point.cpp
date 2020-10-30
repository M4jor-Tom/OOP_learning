#include "../Headers/main.h"

using namespace std;

Point::Point()
{
	cout << "Point created with null values" << endl;
	memset(this, 0, sizeof(Point));
}

Point::Point(int x, int y): _x(x), _y(y)
{
	cout << "Point created" << endl;
}

Point::Point(const Point& p): _x(p._x), _y(p._y)
{
	cout << "point copied" << endl;
}

Point::~Point()
{
	cout << "Point deleted" << endl;
}

void Point::display()
{
	cout << _x << ", " << _y << endl;
}

int Point::getX()
{
	return _x;
}

int Point::getY()
{
	return _y;
}

void Point::setX(int val)
{
	_x = val;
}

void Point::setY(int val)
{
	_y = val;
}