#pragma once
#include "opencv2/opencv.hpp"
#include "Mapper.h"

/// <summary>
/// 輝度へ変換
/// </summary>
class Converter
{
public:
	/// <summary>
	/// 最大値を取得する
	/// </summary>
	/// <returns>最大値</returns>
	int Max() const;

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="mapper">写像</param>
	Converter(const Mapper& mapper);

	/// <summary>
	/// 輝度へ変換する
	/// </summary>
	/// <param name="z">複素数</param>
	/// <returns>輝度</returns>
	cv::Vec3b Convert(const ComplexNumber& z);

private:
	/// <summary>写像</summary>
	const Mapper _mapper;

	/// <summary>最大値</summary>
	int _max;

	/// <summary>最大適用回数</summary>
	static int MaxCount;
};

