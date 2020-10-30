#include "../Headers/main.h"

using namespace std;

int main()
{
	//Cr�ation des valeurs initiales
	int x, y;

	//R�cup�ration des donn�es
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
		*pPtr = new Point(x, y);

	//Appel de la m�thode d'affichage
	cout << "p & p2:" << endl;
	p.display();
	p2.display();

	cout << "Trangle:" << endl;
	for(Point _p : rTriangle)
		_p.display();

	cout << "dynamic Point:" << endl;
	pPtr -> display();

	//Le passage par r�f�rence permet l'�conomie de la copie d'argument dans la fonction
	cout << "Reference pass display:" << endl;
	displayPoint(p);

	//Suppression des objets dynamiques
	delete pPtr;

	return 0;
}

void displayPoint(Point& p)
{
	p.display();
}