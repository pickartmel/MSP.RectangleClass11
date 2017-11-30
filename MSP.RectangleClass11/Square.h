#pragma once
#include "Rectangle.h"

class Square : public Rectangle
{
public:
	Square() {};

	virtual void SetWidth(float w)
	{
		Rectangle::setWidth(w);
		Rectangle::setHeight(w);
	}
	virtual void SetHeight(float h)
	{
		Rectangle::setHeight(h);
	}


	//void SetHeightWidth(float hw)
	//{
	//	Rectangle::setHeight(hw);
	//	Rectangle::setWidth(hw);
	//}

};