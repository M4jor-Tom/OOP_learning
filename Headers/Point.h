#pragma once
#include "../Headers/main.h"

class Point:
	public GraphicObject
{
	protected:
		int _x, _y;
	public:
		//Constructeurs
		//Par défault
		Point();

		//Normal
		Point(int x, int y);

		//Par recopie
		Point(const Point &p);

		//Destructeur
		virtual ~Point();

		//std::string toString();
		virtual void display() override;

		//AccessOrs
		int getX();
		int getY();

		//Setters
		void setX(int val);
		void setY(int val);
};