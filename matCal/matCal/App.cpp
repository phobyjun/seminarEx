#include "App.h"

App::App()
{
}

App::~App()
{
}

void App::getCommand()
{
	cout << "------------------" << endl;
	cout << "1. 덧셈" << endl;
	cout << "2. 뺄셈" << endl;
	cout << "3. 곱셈" << endl;
	cout << "0. 종료" << endl;
	cout << "------------------" << endl;

	cout << "입력 :: ";
	cin >> command;
}

void App::start()
{
	int row1, col1, row2, col2, input;

	cout << "1번 행렬의 크기를 입력하시오(행 열 순서)::";
	cin >> row1;
	cin >> col1;
	mat1.makeMat(row1, col1);
	cout << (row1 * col1) << "개의 행렬의 요소를 입력하시오" << endl;
	for (int i = 0; i < row1; i++)
		for (int j = 0; j < col1; j++)
		{
			cout << "입력::";
			cin >> input;

			mat1.mat[i][j] = input;
		}

	cout << "2번 행렬의 크기를 입력하시오(행 열 순서)::";
	cin >> row2;
	cin >> col2;
	mat2.makeMat(row2, col2);
	cout << (row2 * col2) << "개의 행렬의 요소를 입력하시오" << endl;
	for (int i = 0; i < row2; i++)
		for (int j = 0; j < col2; j++)
		{
			cout << "입력::";
			cin >> input;

			mat2.mat[i][j] = input;
		}
}

void App::add()
{
	Matrix mat3 = mat1 + mat2;
	cout << endl << "결과" << endl << endl;
	mat3.printMat();
	system("pause");
}

void App::sub()
{
	Matrix mat3 = mat1 - mat2;
	cout << endl << "결과" << endl << endl;
	mat3.printMat();
	system("pause");
}

void App::multi()
{
	Matrix mat3 = mat1 * mat2;
	cout << endl << "결과" << endl << endl;
	mat3.printMat();
	system("pause");
}

void App::run()
{
	start();

	while (true)
	{
		system("cls");

		cout << "1번 행렬" << endl;
		mat1.printMat();
		cout << endl << "2번 행렬" << endl;
		mat2.printMat();

		getCommand();

		if (command == 0)
			break;
		else if (command == 1)
		{
			if (mat1.row == mat2.row && mat1.col == mat2.col)
				add();
			else
			{
				cout << "덧셈 불가" << endl << endl;
				system("pause");
			}
		}
		else if (command == 2)
		{
			if (mat1.row == mat2.row && mat1.col == mat2.col)
				sub();
			else
			{
				cout << "뺄셈 불가" << endl << endl;
				system("pause");
			}
		}
		else if (command == 3)
		{
			if (mat1.col == mat2.row)
				multi();
			else
			{
				cout << "곱셈 불가" << endl << endl;
				system("pause");
			}
		}
	}
}