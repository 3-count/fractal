#include "Mapper.h"

Mapper::Mapper(const ComplexNumber& constantTerm) :
	_constantTerm(constantTerm)
{
}

Mapper::Mapper(const Mapper& src) : _constantTerm(src._constantTerm)
{
}

ComplexNumber Mapper::Map(const ComplexNumber& value) const
{
	return value.Multiply(value).Add(_constantTerm);
}
