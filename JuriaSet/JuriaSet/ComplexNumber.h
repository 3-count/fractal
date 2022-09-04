#pragma once
class ComplexNumber
{
public:
	/// <summary>
	/// �������擾����
	/// </summary>
	/// <returns>����</returns>
	double RealPart() const;

	/// <summary>
	/// �������擾����
	/// </summary>
	/// <returns>����</returns>
	double ImaginaryPart() const;

	/// <summary>
	/// ��Βl���擾����
	/// </summary>
	/// <returns>��Βl</returns>
	double AbsoluteValue() const;

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	/// <param name="realPart">����</param>
	/// <param name="imaginaryPart">����</param>
	ComplexNumber(const double realPart, const double imaginaryPart);

	/// <summary>
	/// �R�s�[�R���X�g���N�^
	/// </summary>
	/// <param name="src">�R�s�[��</param>
	ComplexNumber(const ComplexNumber& src);

	/// <summary>
	/// <paramref name="value"/>�����Z����
	/// </summary>
	/// <param name="value">�l</param>
	/// <returns>���Z����</returns>
	ComplexNumber Add(const ComplexNumber& value) const;

	/// <summary>
	/// <paramref name="value"/>���|����
	/// </summary>
	/// <param name="value">�l</param>
	/// <returns>���Z����</returns>
	ComplexNumber Multiply(const ComplexNumber& value) const;

	/// <summary>
	/// <paramref name="value"/>�ƈ�v���邩���肷��
	/// </summary>
	/// <param name="value">�l</param>
	/// <returns>true=��v����/false=��v���Ȃ�</returns>
	bool Equals(const ComplexNumber& value) const;

private:
	/// <summary>����</summary>
	double _realPart;
	
	/// <summary>����</summary>
	double _imaginaryPart;

	/// <summary>
	/// <paramref name="left"/>��<paramref name="right"/>����v���邩���肷��
	/// </summary>
	/// <param name="left">����</param>
	/// <param name="right">�E��</param>
	/// <returns>true=��v����/false=��v���Ȃ�</returns>
	bool Equals(double left, double right) const;
};

