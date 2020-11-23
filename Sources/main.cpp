#include "../Headers/main.h"

using namespace std;

void DrawExample();
void ColoredPointExample();
void PointExample();

int main()
{
	DrawExample();
	return 0;
}

void DrawExample()
{
	DrawSheet sheet;
	int top, bot, left, right;
	cout << "Top of rectangle (y max): "; cin >> top;
	cout << "Bottom of rectangle (y min): "; cin >> bot;
	cout << "Left of rectangle (x min): "; cin >> left;
	cout << "Right of rectangle (x max): "; cin >> right;

	Rectangle r(Point(left, top), Point(right, bot));
	sheet.add(r);

	sheet.display();
}

void ColoredPointExample()
{
	ColoredPoint cPoint;
	Point *PointPtr = &cPoint;
	//PointPtr -> display();	#VIOLATION D'ACCES EN LECTURE

}

void PointExample()
{
	//Création des valeurs initiales
	int x, y;

	//Récupération des données
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;

	//Construction des objets
	Point
		p(x, y),
		p2 = Point(p),
		rTriangle[] =
	{
		Point(x, y),
		Point(x + 4, y),
		Point(x, y + 5)
	},
		* pPtr = new Point(x, y);

	//Appel de la méthode d'affichage
	cout << "p & p2:" << endl;
	p.display();
	p2.display();

	cout << "Trangle:" << endl;
	for (Point _p : rTriangle)
		_p.display();

	cout << "dynamic Point:" << endl;
	pPtr->display();

	//Le passage par référence permet l'économie de la copie d'argument dans la fonction
	cout << "Reference pass display:" << endl;
	//displayPoint(p);

	//Suppression des objets dynamiques
	delete pPtr;
}

/*
void displayPoint(Point& p)
{
	p.display();
}*/