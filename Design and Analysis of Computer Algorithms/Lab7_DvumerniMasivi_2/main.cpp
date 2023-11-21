#include <iostream>
using namespace std;
const int max_rows = 100;
const int max_cols = 100;

void read(int matrica[][max_cols], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int c = 0; c < col; c++)
		{
			cin >> matrica[i][c];
		}
	}
}
void findx(int matrica[][max_cols], int row, int col, int x)
{
	for (int i = 0; i < row; i++)
	{
		for (int c = 0; c < col; c++)
		{
			if (matrica[i][c] == x)
			{
				cout << i+1<<" ";
			}
		}
	}
	cout << endl;
}
bool symetric(int matrica[][max_cols], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int c = 1; c < i; c++)
		{
			if (matrica[i][c] != matrica[c][i])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	system("chcp 1251");
	int matrica[max_rows][max_cols];
	int n, m, x;
	cin >> n >> m >> x;
	read(matrica, n, m);
	findx(matrica, n, m, x);
	if (symetric(matrica, n, m) == true)
	{
		cout << "Симетрична матрица" << endl;
	}
	system("pause");
	return 0;
}