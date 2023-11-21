#include <iostream>
using namespace std;
int main()
{
	int m[15];
	for (int i = 0; i < 15; i++)
	{
		cin >> m[i];
	}
	for (int i = 15; i > 0; i--)
	{
		if (m[i] % 3 == 0)
		{
			cout << m[i] << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}