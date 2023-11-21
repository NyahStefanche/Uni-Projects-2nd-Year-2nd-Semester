#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<long long int> masiv;
	int n,m, s;
	bool flag = true, flag1 = false;
	cin >> n >> m;
	if (n <= 300)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			masiv.push_back(s);
		}
	}
	int msize = masiv.size();
	for (int i = msize-1; i > 0; i--)
	{
		if (masiv[i] > m && flag==true)
		{
			cout << masiv[i] << " " << i+1;
			flag = false;
			flag1 = true;
		}
	}
	if (flag1 == false)
	{
		cout << "NO";
	}
	cout << endl;
	system("pause");
	return 0;
}