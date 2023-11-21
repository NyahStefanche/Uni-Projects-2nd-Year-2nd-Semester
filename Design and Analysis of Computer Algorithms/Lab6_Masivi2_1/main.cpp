#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s, firstabove100 = 0;
	bool flag = true;
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
		if (masiv[i] > 100 && flag == true)
		{
			firstabove100 = masiv[i];
			flag = false;
		}
	}
	if (firstabove100 == 0 || flag == true)
	{
		cout << "NO";
	}
	else
	{
		cout << firstabove100 << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}