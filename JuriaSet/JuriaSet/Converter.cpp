#include "Converter.h"
#include "Mapper.h"
#include <cmath>

int Converter::MaxCount = 0xffffff;

Converter::Converter(const Mapper& mapper) :_mapper(mapper),_max(0)
{
}

int Converter::Max() const
{
	return _max;
}

cv::Vec3b Converter::Convert(const ComplexNumber& z)
{
	ComplexNumber previous = z;
	ComplexNumber current = z;
	int count = 0;
	while (count <= Converter::MaxCount)
	{
		current = _mapper.Map(previous);
		if (current.Equals(previous))
		{
			count = Converter::MaxCount;
			break;
		}

		if (2.0 < current.AbsoluteValue())
		{
			break;
		}

		count++;
		previous = current;
	}

	_max = std::max(_max, count);
	return cv::Vec3b(count & 0xff, (count >> 8) & 0xff, (count >> 16) & 0xff);
}
