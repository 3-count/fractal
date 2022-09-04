#pragma once
#include "opencv2/opencv.hpp"
#include "Mapper.h"

/// <summary>
/// �P�x�֕ϊ�
/// </summary>
class Converter
{
public:
	/// <summary>
	/// �ő�l���擾����
	/// </summary>
	/// <returns>�ő�l</returns>
	int Max() const;

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	/// <param name="mapper">�ʑ�</param>
	Converter(const Mapper& mapper);

	/// <summary>
	/// �P�x�֕ϊ�����
	/// </summary>
	/// <param name="z">���f��</param>
	/// <returns>�P�x</returns>
	cv::Vec3b Convert(const ComplexNumber& z);

private:
	/// <summary>�ʑ�</summary>
	const Mapper _mapper;

	/// <summary>�ő�l</summary>
	int _max;

	/// <summary>�ő�K�p��</summary>
	static int MaxCount;
};

