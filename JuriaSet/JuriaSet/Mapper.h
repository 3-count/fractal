#pragma once
#include "ComplexNumber.h"

/// <summary>
/// 写像
/// </summary>
class Mapper
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="constantTerm">定数項</param>
	Mapper(const ComplexNumber& constantTerm);

	/// <summary>
	/// コピーコンストラクタ
	/// </summary>
	/// <param name="src">コピー元</param>
	Mapper(const Mapper& src);

	/// <summary>
	/// <paramref name="z"/>を変換する
	/// </summary>
	/// <param name="value">値</param>
	/// <returns>変換結果</returns>
	ComplexNumber Map(const ComplexNumber& value) const;

private:
	/// <summary>定数項</summary>
	const ComplexNumber _constantTerm;
};

