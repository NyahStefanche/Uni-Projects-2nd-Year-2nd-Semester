#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s, closeones = 0;
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
	for (int i = 1; i < msize; i++)
	{
		if (masiv[i - 1] < masiv[i])
		{
			closeones++;
		}
	}
	cout << closeones;
	cout << endl;
	system("pause");
	return 0;
}