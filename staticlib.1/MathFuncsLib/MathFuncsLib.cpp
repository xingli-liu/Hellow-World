﻿// MathFuncsLib.cpp : 定义静态库的函数。
//

#include "pch.h"
//#include "framework.h"

#include "MathFuncsLib.h"

//#include <stdexcept>
// TODO: 这是一个库函数示例
// MathFuncsLib.cpp
// compile with: cl /c /EHsc MathFuncsLib.cpp
// post-build command: lib MathFuncsLib.obj


using namespace std;

namespace MathFuncs
{
	double MyMathFuncs::Add(double a, double b)
	{
		return a + b;
	}

	double MyMathFuncs::Subtract(double a, double b)
	{
		return a - b;
	}

	double MyMathFuncs::Multiply(double a, double b)
	{
		return a * b;
	}

	double MyMathFuncs::Divide(double a, double b)
	{
		return a / b;
	}
}