#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> m;
	int n, s, a = 0;
	cin >> n;
	if (n <= 550)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			m.push_back(s);
		}
	}
	int msize = m.size();
	for (int i = 0; i < msize; i++)
	{
		if (m[i] > a)
		{
			a = m[i];
		}
	}
	cout << endl;
	cout << a << endl;
	for (int i = 0; i < msize; i++)
	{
		if (m[i] == a)
		{
			cout << i + 1 << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}