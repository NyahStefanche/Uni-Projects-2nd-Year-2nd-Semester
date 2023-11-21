#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s, maxbelow500=0;
	cin >> n;
	if (n <= 280)
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
		if (masiv[i] > maxbelow500 && masiv[i]<500)
		{
			maxbelow500 = masiv[i];
		}
	}
	if (maxbelow500 == 0)
	{
		cout << "NO";
	}
	else cout << maxbelow500;
	cout << endl;
	system("pause");
	return 0;
}