#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <int> m;
	int n;
	int s;
	cin >> n;
	if (n <= 100)
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
		if (m[i] > 99 && m[i] < 1000)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}