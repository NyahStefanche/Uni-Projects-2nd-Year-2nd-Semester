#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s, br2 = 0, firstabove100, lastbelow10;
	bool flag = true, flag2 = true;
	cin >> n;
	if (n <= 350)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			masiv.push_back(s);
		}
	}
	int msize = masiv.size();
	for (int i = msize - 1; i >= 0; i--)
	{
		if (masiv[i] < 10 && flag == true)
		{
			lastbelow10 = i-1;
			flag = false;
		}
	}
	for (int i = 0; i < msize; i++)
	{
		if (masiv[i] > 99 && masiv[i] <1000 && flag2== true)
		{
			firstabove100 = i+1;
			flag2 = false;
		}
	}
	//cout << firstabove100 << " " << lastbelow10;
	if (flag == true || flag2 == true)
	{
		cout << "NO";
	}
	else 
	{
		for (int i = firstabove100; i <= lastbelow10; i++)
		{
			if (masiv[i] > 9 && masiv[i] < 100)
			{
				br2++;
			}
		}
		cout << br2;
	}
	cout << endl;
	system("pause");
	return 0;
}