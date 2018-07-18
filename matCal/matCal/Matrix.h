#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;

class Matrix
{
public:
	Matrix();
	~Matrix();
	Matrix(int _row, int _col);
	void makeMat(int row, int col);
	void printMat();
	Matrix & operator+(Matrix& mat);
	Matrix & operator-(Matrix& mat);
	Matrix & operator*(Matrix& mat);

	int** mat;
	int row;
	int col;
};
