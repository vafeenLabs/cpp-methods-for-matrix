#include "Header.h"
#include <iostream>
using std::cout;
int** inic(int rows, int cols)
{
	int** matr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matr[i] = new int[cols];
	}
	return matr;
}
void del(int** matr, int rows)
{
	if (matr)
	{
		for (int i = 0; i < rows; i++)
		{
			delete[] matr[i];
		}
		delete[] matr;
	}
}
void printm(int** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
}