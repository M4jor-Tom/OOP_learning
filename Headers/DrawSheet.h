#pragma once
#include "../Headers/main.h"

using namespace std;

class DrawSheet
{
private:
	list<GraphicObject*> _content;
public:
	DrawSheet();
	virtual ~DrawSheet();

	void add(GraphicObject &go);

	void display();
};