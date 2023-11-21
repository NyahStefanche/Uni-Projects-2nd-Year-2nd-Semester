#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> m;
	int n, s;
	cin >> n;
	if (n <= 400)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			m.push_back(s);
		}
	}
	int br = n-1;
	int msize = m.size();
	for (int i = 0; i < msize; i++)
	{
		if (m[i] % 2 != 0)
		{
			cout << m[i] << " " << i + 1;
		}
		else if (m[i] % 2 == 0)
		{
			br--;
		}
		if (br == 0)
		{
			cout << "NO";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}