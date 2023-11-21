#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s,lesscontinued = 10000;
	cin >> n;
	int continued = 0;
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
		if (masiv[i]<10 && masiv[i]>0)
		{
			continued++;
		}
		else if (lesscontinued > continued && continued != 0)
		{
			lesscontinued = continued;
			continued = 0;
		}
	}
	cout << endl;
	cout << lesscontinued << endl;
	system("pause");
	return 0;
}