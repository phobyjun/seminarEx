#include "Matrix.h"

Matrix::Matrix()
{
}

Matrix::~Matrix()
{
}

Matrix::Matrix(int _row, int _col)
{
	row = _row;
	col = _col;
	int** arr = new int*[_row];
	for (int i = 0; i < _row; i++)
		arr[i] = new int[_col];

	mat = arr;
}

void Matrix::makeMat(int _row, int _col)
{
	row = _row;
	col = _col;
	int** arr = new int*[_row];
	for (int i = 0; i < _row; i++)
		arr[i] = new int[_col];
	
	mat = arr;
}

void Matrix::printMat()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

Matrix & Matrix::operator+(Matrix & _mat)
{
	Matrix tempMat(row, col);

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			tempMat.mat[i][j] = mat[i][j] + _mat.mat[i][j];
		}
	return tempMat;
}

Matrix & Matrix::operator-(Matrix & _mat)
{
	Matrix tempMat(row, col);

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			tempMat.mat[i][j] = mat[i][j] - _mat.mat[i][j];
		}
	return tempMat;
}

Matrix & Matrix::operator*(Matrix & _mat)
{
	Matrix tempMat(row, _mat.col);

	for (int i = 0; i < row; i++)
		for (int j = 0; j < _mat.col; j++)
		{
			int sum = 0;
			for (int k = 0; k < col; k++)
				sum += mat[i][k] * _mat.mat[k][j];
			tempMat.mat[i][j] = sum;
		}
	return tempMat;
}