#include <iostream>
#include <ctime> //За да използваме системното време
#include <stdlib.h> //За да използваме случайни числа (srand,rand)
using namespace std;
void read(int*a,int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void create(int* a, int n)
{
	int t = (int)time(0);
	srand(t);
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 200;
	}
}

void print(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<" ";
	}
}
bool average(int* a, int n, double& avg)
{
	int s = 0, br = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			s = s + a[i];
			br++;
		}
	}
	if (br == 0) return false;
	avg = (double)s / br;
	return true;
}
int print_cond3(int* a, int n)
{
	int br = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 3 == 0)
		{
			br++;
		}
	}
	return br;
}
int sum(int* a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 3 != 0)
		{
			sum += a[i];
		}
	}
	return sum;
}
int main()
{
	int m;
	cin >> m;
	int* n = new int[m];
	read(n, m);
	print(n, m);
	cout << endl;
	create(n, m);
	print(n, m);
	cout << endl;
	double avg=0;
	if (average(n, m, avg))
	{
		cout << avg << endl;
	}
	else
	{
		cout << "Not Found" << endl;
	}
	cout << sum(n, m) << endl;
	cout << print_cond3(n, m) << endl;
	system("pause");
	return 0;
}