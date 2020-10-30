#pragma once
class Point
{
	private:
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
		~Point();

		//std::string toString();
		void display();

		//Accessers
		int getX();
		int getY();

		//Setters
		void setX(int val);
		void setY(int val);
};