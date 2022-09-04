#pragma once
#include "ComplexNumber.h"

/// <summary>
/// �ʑ�
/// </summary>
class Mapper
{
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	/// <param name="constantTerm">�萔��</param>
	Mapper(const ComplexNumber& constantTerm);

	/// <summary>
	/// �R�s�[�R���X�g���N�^
	/// </summary>
	/// <param name="src">�R�s�[��</param>
	Mapper(const Mapper& src);

	/// <summary>
	/// <paramref name="z"/>��ϊ�����
	/// </summary>
	/// <param name="value">�l</param>
	/// <returns>�ϊ�����</returns>
	ComplexNumber Map(const ComplexNumber& value) const;

private:
	/// <summary>�萔��</summary>
	const ComplexNumber _constantTerm;
};

