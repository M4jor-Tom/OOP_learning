#include "../Headers/main.h"
#include "../Headers/DrawSheet.h"

using namespace std;

DrawSheet::DrawSheet()
{
	cout << "New sheet" << endl;
}

DrawSheet::~DrawSheet()
{
	cout << "Sheet deleted" << endl;
}

void DrawSheet::add(GraphicObject& go)
{
	_content.push_back(&go);
}

void DrawSheet::display()
{
	for(GraphicObject *gop : _content)
		gop->display();
}