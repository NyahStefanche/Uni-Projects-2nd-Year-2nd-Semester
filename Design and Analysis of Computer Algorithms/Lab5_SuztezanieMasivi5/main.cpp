#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ln;
	int n, m, sum = 0, s;
	cin >> n >> m;
	if (n <= 300)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			ln.push_back(s);
		}
	}
	int lns = ln.size();
	for (int i = 0; i < lns; i++)
	{
		if (ln[i] * ln[i] < m)
		{
			sum=sum + (ln[i]*ln[i]);
		}
		if (ln[i] * ln[i] > m)
		{
			cout << i+1 << " ";
		}
	}
	cout << endl;
	cout << sum << endl;
	system("pause");
	return 0;
}