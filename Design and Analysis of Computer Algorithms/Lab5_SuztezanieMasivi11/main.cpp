#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s, max = 0;
	bool flag = true;
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
		if (masiv[i] < 10 && masiv[i]>max)
		{
			max = masiv[i];
			flag = false;
		}
	}
	cout << endl;
	if (flag == false)
	{
		cout << max << endl;
	}
	if (flag == true)
	{
		cout << "NO" << endl;;
	}
	system("pause");
	return 0;
}