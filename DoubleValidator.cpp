#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(double value)
{
	if (value < 0)
	{
		return false;
	}
	return true;
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	if (value < min || value > max)
	{
		return  false;
	}
	return true;
}

void DoubleValidator::AssertPositiveValue(double value)
{
	if (value < 0)
	{
		throw std::exception("Radius cannot be negative");
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	if (value < min || value > max)
	{
		throw std::exception("The value is not in the range");
	}
}
