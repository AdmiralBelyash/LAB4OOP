#pragma once
#include "Point.h"
class Rectangle
{
private:

	Point* _center;
	double _length;
	double _width;

public:
	Rectangle(Point* center, double length, double width);

	void SetCenter(Point* center);
	void SetLength(double length);
	void SetWidth(double width);

	Point* GetCenter() const;
	double GetLength() const;
	double GetWidth() const;
};

