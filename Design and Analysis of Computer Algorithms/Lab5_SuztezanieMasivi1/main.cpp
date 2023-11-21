#include <iostream>
using namespace std;
int main()
{
	int m[10];
	int br = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> m[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (m[i] % 2 != 0)
		{
			br++;
		}
	}
	cout << br << endl;
	system("pause");
	return 0;
}