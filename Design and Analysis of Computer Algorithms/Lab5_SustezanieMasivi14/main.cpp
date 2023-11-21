#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s, sinked = 0;
	cin >> n;
	if (n <= 300)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			masiv.push_back(s);
		}
	}
	int msize = masiv.size();
	for (int i = 1; i < msize-1; i++)
	{
		if (masiv[(i - 1)] > masiv[i] && masiv[i] < masiv[(i + 1)])
		{
			sinked++;
		}
	}
	cout << endl;
	cout << sinked << endl;
	system("pause");
	return 0;
}