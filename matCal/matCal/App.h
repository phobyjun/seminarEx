#pragma once
#include "Matrix.h"

class App
{
public:
	App();
	~App();
	void run();
	void start();
	void getCommand();
	void add();
	void sub();
	void multi();

private:
	int command;
	Matrix mat1;
	Matrix mat2;
};
