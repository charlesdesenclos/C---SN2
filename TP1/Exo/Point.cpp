#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{

}
void Point::affiche()
{
	cout<< "X = " << x << "; Y =" << y << endl;

}

void Point::copie(Point &B)
{
	B.x = x;
	B.y = y;
}