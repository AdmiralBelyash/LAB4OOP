#include "Ring.h"

#include "DoubleValidator.h"

int Ring::AllRingsCount = 0;

void Ring::SetRadius(double outerRadius, double innerRadius)
{
	DoubleValidator::AssertPositiveValue(outerRadius);
	DoubleValidator::AssertPositiveValue(innerRadius);

	if (innerRadius > outerRadius)
	{
		throw std::exception("Inner radius cannot be more than outer radius");
	}

	this->_outerRadius = outerRadius;
	this->_innerRadius = innerRadius;
}

void Ring::SetCenter(Point* center)
{
	this->_center = center;
}

int Ring::GetAllRingsCount()
{
	return Ring::AllRingsCount;
}

double Ring::GetOuterRadius() const
{
	return this->_outerRadius;
}

double Ring::GetInnerRadius() const
{
	return this->_innerRadius;
}

Point* Ring::GetCenter() const
{
	return this->_center;
}

double Ring::GetArea() const
{
	const double PI = 3.1415;
	double outerArea = PI * std::pow(this->GetOuterRadius(), 2);
	double innerArea = PI * std::pow(this->GetInnerRadius(), 2);
	return outerArea - innerArea;
}

Ring::Ring(double outerRadius, double innerRadius,Point* center)
{
	this->SetRadius(outerRadius, innerRadius);
	this->SetCenter(center);
	++AllRingsCount;
}

Ring::~Ring()
{
	AllRingsCount--;
}
