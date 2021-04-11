#pragma once
#include "Point.h"
#include <cmath>
#include <exception>

class Ring
{
private:
	static int AllRingsCount;

	double _outerRadius;
	double _innerRadius;
	Point* _center;
public:
	Ring(double outerRadius, double innerRadius, Point* center);
	~Ring();

	void SetRadius(double outerRadius, double innerRadius);
	void SetCenter(Point* center);

	static int GetAllRingsCount();
	double GetOuterRadius() const;
	double GetInnerRadius() const;
	Point* GetCenter() const;

	double GetArea() const;
};