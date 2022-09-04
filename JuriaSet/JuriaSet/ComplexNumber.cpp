#include "ComplexNumber.h"
#include <cmath>

double ComplexNumber::RealPart() const
{
	return _realPart;
}

double ComplexNumber::ImaginaryPart() const
{
	return _imaginaryPart;
}

double ComplexNumber::AbsoluteValue() const
{
	return std::sqrt(_realPart * _realPart + _imaginaryPart * _imaginaryPart);
}

ComplexNumber::ComplexNumber(
	const double realPart,
	const double imaginaryPart) :
	_realPart(realPart),
	_imaginaryPart(imaginaryPart)
{
}

ComplexNumber::ComplexNumber(const ComplexNumber& src) :
	_realPart(src._realPart),
	_imaginaryPart(src._imaginaryPart)
{
}

ComplexNumber ComplexNumber::Add(const ComplexNumber& value) const
{
	return ComplexNumber(
		_realPart + value._realPart,
		_imaginaryPart + value._imaginaryPart);
}

ComplexNumber ComplexNumber::Multiply(const ComplexNumber& value) const
{
	double rr = _realPart * value._realPart;
	double ri = _realPart * value._imaginaryPart;
	double ii = _imaginaryPart * value._imaginaryPart;
	double ir = _imaginaryPart * value._realPart;
	return ComplexNumber(rr - ii, ri + ir);
}

bool ComplexNumber::Equals(const ComplexNumber& value) const
{
	return Equals(_realPart, value._realPart) && Equals(_imaginaryPart, value._imaginaryPart);
}

bool ComplexNumber::Equals(double left, double right) const
{
	return std::fabs(left - right) < 1.0e-10;
}
