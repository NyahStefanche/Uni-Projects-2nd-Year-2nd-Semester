#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s;
	bool flag = true;
	cin >> n;
	if (n <= 200)
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
		if (masiv[i] < 10 && flag==true)
		{
			cout << masiv[i] <<" "<<i+1;
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