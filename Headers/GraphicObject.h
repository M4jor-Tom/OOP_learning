#pragma once

class GraphicObject
{
public:
	GraphicObject();
	virtual ~GraphicObject();
	virtual void display() = 0;
};