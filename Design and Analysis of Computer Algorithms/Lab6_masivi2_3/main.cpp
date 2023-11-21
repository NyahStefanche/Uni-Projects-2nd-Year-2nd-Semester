#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s;
	bool flag = true;
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
	for (int i = msize-1; i >=0; i--)
	{
		if (masiv[i] % 10 == 5 && flag==true)
		{
			cout << masiv[i];
			flag = false;
		}
	}
	if (flag == true)
	{
		cout << "NO";
	}
	cout << endl;
	system("pause");
	return 0;
}