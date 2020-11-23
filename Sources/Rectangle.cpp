#include "../Headers/main.h"
#include "../Headers/Rectangle.h"

using namespace std;

Rectangle::Rectangle(): _topLeftAngle(Point()), _botRightAngle(Point())
{
	cout << "Empty rectangle created" << endl;
}

Rectangle::Rectangle(Point topLeft, Point botRight): _topLeftAngle(topLeft), _botRightAngle(botRight)
{
	cout << "Rectangle created with " << endl;
	display();
}

void Rectangle::display()
{
	cout << "Top left angle: ";
	_topLeftAngle.display();

	cout << "Bottom right angle: ";
	_botRightAngle.display();

	cout << endl;
}

Rectangle::~Rectangle()
{
	cout << "Rectangle deleted" << endl;
}