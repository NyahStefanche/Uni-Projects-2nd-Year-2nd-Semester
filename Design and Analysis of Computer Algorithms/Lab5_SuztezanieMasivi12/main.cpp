#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s, continued = 0, maxcontinued = 0;
	cin >> n;
	if (n <= 100)
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
		if (masiv[i] % 2 == 0)
		{
			continued++;
		}
		else if (masiv[i] % 2 != 0)
		{
			maxcontinued = continued;
			continued = 0;
		}
	}
	cout << maxcontinued << endl;
	cout << endl;
	system("pause");
	return 0;
}