#include <iostream>
using namespace std;
const int max_cols = 100;
const int max_rows = 100;

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
void sumcol(int matrica[][max_cols], int row, int col)
{
	int sumcols=0;
	for (int i = 0; i < row; i++)
	{
		for (int c = 0; c < col; c++)
		{
			sumcols += matrica[i][c];
		}
	}
	cout << sumcols << endl;
}
void maxm(int matrica[][max_cols], int row, int col)
{
	int max = 0;
	for (int i = 0; i < row; i++)
	{
		for (int c = 0; c < col; c++)
		{
			if (max < matrica[i][c])
			{
				max = matrica[i][c];
			}
		}
	}
	cout << max << endl;
}
void minm(int matrica[][max_cols], int row, int col)
{
	int min = 10000;
	for (int i = 0; i < row; i++)
	{
		for (int c = 0; c < col; c++)
		{
			if (min > matrica[i][c])
			{
				min = matrica[i][c];
			}
		}
	}
	cout << min << endl;
}
void lesserthanV(int matrica[][max_cols], int row, int col, int v)
{
	for (int i = 0; i < row; i++)
	{
		for (int c = 0; c < col; c++)
		{
			if (matrica[i][c] < v)
			{
				cout << i+1<<" "<< c+1<<"\t";
			}
		}
	}
	cout << endl;
}
void ChetniSumRow(int matrica[][max_cols], int row, int col)
{
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int c = 0; c < col; c++)
		{
			if ((i+1)%2==0)
			{
				sum += matrica[i][c];
			}
		}
	}
	cout << sum << endl;
}
void NechetniSumCol(int matrica[][max_cols], int row, int col)
{
	int sum = 1;
	for (int i = 0; i < row; i++)
	{
		for (int c = 0; c < col; c++)
		{
			if ((c + 1) % 2 != 0)
			{
				sum += matrica[i][c];
			}
		}
	}
	cout << sum << endl;
}
void IndexChetniSum(int matrica[][max_cols], int row, int col)
{
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int c = 0; c < col; c++)
		{
			if (((c + 1) + (i + 1)) % 2 == 0)
			{
				sum += matrica[i][c];
				cout <<(c+1)<<","<<(i+1)<<" = "<<((c + 1) + (i + 1))<<" ";
			}
		}
	}
	cout << sum << endl;
}
void IndexNechetniSum(int matrica[][max_cols], int row, int col)
{
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int c = 0; c < col; c++)
		{
			if (((c + 1) + (i + 1)) % 2 != 0)
			{
				sum += matrica[i][c];
				cout << (c + 1) << "," << (i + 1) << " = " << ((c + 1) + (i + 1)) << " ";
			}
		}
	}
	cout << sum << endl;
}
int main()
{
	int matrica[max_rows][max_cols];
	int n, m, v;
	cin >> n >> m >> v;
	read(matrica, n, m);
	sumcol(matrica, n, m);
	maxm(matrica, n, m);
	minm(matrica, n, m);
	lesserthanV(matrica, n, m, v);
	ChetniSumRow(matrica, n, m);
	NechetniSumCol(matrica, n, m);
	IndexChetniSum(matrica, n, m);
	IndexNechetniSum(matrica, n, m);
	system("pause");
	return 0;
}