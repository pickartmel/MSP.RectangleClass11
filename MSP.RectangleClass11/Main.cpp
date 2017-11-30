#include <conio.h>
#include "Rectangle.h"
#include "Square.h"


using namespace std;

int main()
{

	cout << "Rectangle Height: ";
	float height;
	cin >> height;
	cout << "Rectangle Width: ";
	float width;
	cin >> width;

	Rectangle MyRectangle(height, width);

	MyRectangle.Display();

	Square MySquare;	
	cout << "Square Height or Width: ";
	float SHeight;
	cin >> SHeight;

	MySquare.SetHeightWidth(SHeight);
	MySquare.Display();



	_getch();
	return 0;
}