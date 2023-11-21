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
		m[n%10]++;
		n /= 10;
	}
}

void print(int *m)
{
	for (int i=0; i < 10; i++)
	{
		if (m[i] != 0) cout << i<<" ";
	}
}

int main()
{
	int counter[10];
	system("chcp 1251");
	fill(counter);
	read(counter);
	print(counter);
	system("pause");
	return 0;
}