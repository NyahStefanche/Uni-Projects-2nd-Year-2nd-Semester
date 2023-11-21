#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> m;
	int n, s, a = 1000, br = 0;
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
		if (m[i] < a)
		{
			a = m[i];
		}
	}
	for (int i = 0; i < msize; i++)
	{
		if (m[i] == a)
		{
			br++;
		}
	}
	cout << endl;
	cout << a <<" "<< br << endl;
	system("pause");
	return 0;
}