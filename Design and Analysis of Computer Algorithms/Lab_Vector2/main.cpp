#include <iostream>
#include <vector>
using namespace std;
int main()
{
	system("chcp 1251");
	int n;
	vector <int> c1;
	vector <int> c2;
	vector <int> c3;
	cin >> n;
	while (n != 0)
	{
		if (n < 10)
		{
			c1.push_back(n);
		}
		else if (n < 100)
		{
			c2.push_back(n);
		}
		else if (n < 1000)
		{
			c3.push_back(n);
		}
		cin >> n;
	}
	int c1size = c1.size();
	int c2size = c2.size();
	int c3size = c3.size();
	if (c1size != 0)
	{
		cout << c1size << endl;
	}
	else
	{
		cout << "NONE" << endl;
	}
	for (int i1 = 0; i1 < c1size; i1++)
	{
		cout << c1[i1]<<" ";
	}
	cout << endl;
	if (c2size != 0)
	{
		cout << c2size << endl;
	}
	else
	{
		cout << "NONE" << endl;
	}
	for (int i2 = 0; i2 < c2size; i2++)
	{
		cout << c2[i2]<<" ";
	}
	cout << endl;
	if (c3size != 0)
	{
		cout << c3size << endl;
	}
	else
	{
		cout << "NONE" << endl;
	}
	for (int i3 = 0; i3 < c3size; i3++)
	{
		cout << c3[i3] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}