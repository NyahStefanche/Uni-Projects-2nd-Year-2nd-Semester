#include <iostream>
using namespace std;

void fill(int* m)
{
	for (int i = 0; i < 10; i++)
	{
		m[i] = 0;
	}
}
void read(int*m,int n,int*m1)
{
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
		while (m[i])
		{
			m1[m[i] % 10]++;
			m[i] /= 10;
		}
	}
}

void print_min(int*m)
{
	long long int min = 1;
	for (int i = 0; i < 10; i++)
	{
		if (m[i] != 0)
		{
			int br = m[i];
			while (br)
			{
				min = min * 10 + i;
				br--;
			}
		}
	}
	cout << min << endl;
}

void print_max(int*m)
{
	long long int max = 0;
	for (int i = 9; i >= 0; i--)
	{
		if (m[i] != 0)
		{
			int br = m[i];
			while (br)
			{
				max = max * 10 + i;
				br--;
			}
		}
	}
	cout << max << endl;
}

int main()
{
	int n;
	cin >> n;
	int c[15];
	int counter[10];
	fill(counter);
	read(c, n,counter);
	print_min(counter);
	print_max(counter);
	system("pause");
	return 0;
}