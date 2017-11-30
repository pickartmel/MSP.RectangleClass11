#pragma once
#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
public:

	Rectangle() {	}
	Rectangle(float h, float w)
	{
		setHeight(h);
		setWidth(w);
	}

	//getter methods
	virtual float GetHeight() { return m_height; }
	virtual float GetWidth() { return m_width; }

	virtual float GetArea() { return m_width*m_height; }
	virtual float GetPerimeter() { return 2 * (m_width + m_height); }

	//setter methods
	virtual void setHeight(float height) { m_height = height; }
	virtual void setWidth(float width) { m_width = width; }

	virtual void Display()
	{
		cout << "Height: " << m_height << endl;
		cout << "Width: " << m_width << endl;
		cout << "Area: " << GetArea() << endl;
		cout << "Perimeter " << GetPerimeter() << endl;
	}

private:
	float m_height;
	float m_width;

};