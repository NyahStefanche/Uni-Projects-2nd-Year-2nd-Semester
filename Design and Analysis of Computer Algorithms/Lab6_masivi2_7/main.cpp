#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s, minabove50 = 10000;
	cin >> n;
	if (n <= 400)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			masiv.push_back(s);
		}
	}
	int msize = masiv.size();
	for (int i = 0; i < msize; i++)
	{
		if (masiv[i] < minabove50 && masiv[i] > 50)
		{
			minabove50 = masiv[i];
		}
	}
	if (minabove50 == 10000)
	{
		cout << "NO";
	}
	else cout << minabove50;
	cout << endl;
	system("pause");
	return 0;
}