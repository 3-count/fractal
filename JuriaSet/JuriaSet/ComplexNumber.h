#pragma once
class ComplexNumber
{
public:
	/// <summary>
	/// 実部を取得する
	/// </summary>
	/// <returns>実部</returns>
	double RealPart() const;

	/// <summary>
	/// 虚部を取得する
	/// </summary>
	/// <returns>虚部</returns>
	double ImaginaryPart() const;

	/// <summary>
	/// 絶対値を取得する
	/// </summary>
	/// <returns>絶対値</returns>
	double AbsoluteValue() const;

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="realPart">実部</param>
	/// <param name="imaginaryPart">虚部</param>
	ComplexNumber(const double realPart, const double imaginaryPart);

	/// <summary>
	/// コピーコンストラクタ
	/// </summary>
	/// <param name="src">コピー元</param>
	ComplexNumber(const ComplexNumber& src);

	/// <summary>
	/// <paramref name="value"/>を加算する
	/// </summary>
	/// <param name="value">値</param>
	/// <returns>演算結果</returns>
	ComplexNumber Add(const ComplexNumber& value) const;

	/// <summary>
	/// <paramref name="value"/>を掛ける
	/// </summary>
	/// <param name="value">値</param>
	/// <returns>演算結果</returns>
	ComplexNumber Multiply(const ComplexNumber& value) const;

	/// <summary>
	/// <paramref name="value"/>と一致するか判定する
	/// </summary>
	/// <param name="value">値</param>
	/// <returns>true=一致する/false=一致しない</returns>
	bool Equals(const ComplexNumber& value) const;

private:
	/// <summary>実部</summary>
	double _realPart;
	
	/// <summary>虚部</summary>
	double _imaginaryPart;

	/// <summary>
	/// <paramref name="left"/>と<paramref name="right"/>が一致するか判定する
	/// </summary>
	/// <param name="left">左辺</param>
	/// <param name="right">右辺</param>
	/// <returns>true=一致する/false=一致しない</returns>
	bool Equals(double left, double right) const;
};

