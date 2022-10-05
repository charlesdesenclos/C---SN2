#pragma once

using namespace std;
class Point
{
private:
	double x, y;

public:
	Point(double x = 0, double y = 0);
	~Point();
	void affiche();
	void copie(Point &B);
};

