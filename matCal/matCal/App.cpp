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
	cout << "1. ����" << endl;
	cout << "2. ����" << endl;
	cout << "3. ����" << endl;
	cout << "0. ����" << endl;
	cout << "------------------" << endl;

	cout << "�Է� :: ";
	cin >> command;
}

void App::start()
{
	int row1, col1, row2, col2, input;

	cout << "1�� ����� ũ�⸦ �Է��Ͻÿ�(�� �� ����)::";
	cin >> row1;
	cin >> col1;
	mat1.makeMat(row1, col1);
	cout << (row1 * col1) << "���� ����� ��Ҹ� �Է��Ͻÿ�" << endl;
	for (int i = 0; i < row1; i++)
		for (int j = 0; j < col1; j++)
		{
			cout << "�Է�::";
			cin >> input;

			mat1.mat[i][j] = input;
		}

	cout << "2�� ����� ũ�⸦ �Է��Ͻÿ�(�� �� ����)::";
	cin >> row2;
	cin >> col2;
	mat2.makeMat(row2, col2);
	cout << (row2 * col2) << "���� ����� ��Ҹ� �Է��Ͻÿ�" << endl;
	for (int i = 0; i < row2; i++)
		for (int j = 0; j < col2; j++)
		{
			cout << "�Է�::";
			cin >> input;

			mat2.mat[i][j] = input;
		}
}

void App::add()
{
	Matrix mat3 = mat1 + mat2;
	cout << endl << "���" << endl << endl;
	mat3.printMat();
	system("pause");
}

void App::sub()
{
	Matrix mat3 = mat1 - mat2;
	cout << endl << "���" << endl << endl;
	mat3.printMat();
	system("pause");
}

void App::multi()
{
	Matrix mat3 = mat1 * mat2;
	cout << endl << "���" << endl << endl;
	mat3.printMat();
	system("pause");
}

void App::run()
{
	start();

	while (true)
	{
		system("cls");

		cout << "1�� ���" << endl;
		mat1.printMat();
		cout << endl << "2�� ���" << endl;
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
				cout << "���� �Ұ�" << endl << endl;
				system("pause");
			}
		}
		else if (command == 2)
		{
			if (mat1.row == mat2.row && mat1.col == mat2.col)
				sub();
			else
			{
				cout << "���� �Ұ�" << endl << endl;
				system("pause");
			}
		}
		else if (command == 3)
		{
			if (mat1.col == mat2.row)
				multi();
			else
			{
				cout << "���� �Ұ�" << endl << endl;
				system("pause");
			}
		}
	}
}