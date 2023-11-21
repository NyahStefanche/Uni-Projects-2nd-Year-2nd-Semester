#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s, maxcontinued=0, continued = 0;
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
		if (masiv[i]>0 && masiv[i]<10)
		{
			continued++;
		}
		else if (masiv[i]>9 && continued !=0)
		{
			continued = 0;
		}
		if (continued>=maxcontinued)
		{
			maxcontinued = continued;
		}
	}
	cout << maxcontinued;
	cout << endl;
	system("pause");
	return 0;
}