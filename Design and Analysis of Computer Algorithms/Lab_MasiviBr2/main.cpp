#include <iostream>
using namespace std;

void fill(int* m)
{
	for (int i = 0; i < 10; i++)
	{
		m[i] = 0;
	}
}
void read(int*m)
{
	int n;
	cin >> n;
	while (n)
	{
		m[n % 10]++;
		n /= 10;
	}
}

void print(int*m)
{
	int sum = 0;
	for (int i = 9; i >= 0; i--)
	{
		if (m[i] != 0)
		{
			sum = sum * 10 + i;
		}
	}
	cout << sum << endl;
}

int main()
{
	int counter[10];
	fill(counter);
	read(counter);
	print(counter);
	system("pause");
	return 0;
}