#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> masiv;
	int n, s, pe = 0, pd = 0, br = 0;
	bool flagd = true, flage = true;
	cin >> n;
	if (n <= 150)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			masiv.push_back(s);
		}
	}
	int msize = masiv.size();
	for (int i = msize - 1; i > 0; i--)//Да намеря последното двуцифрено
	{
		if (masiv[i] > 9 && masiv[i] < 100 && flagd == true)
		{	
			pd = i-1;
			flagd = false;
		}
	}
	for (int i =0; i < msize; i++)//Да намеря първото едноцифрено
	{
		if (masiv[i] < 10 && masiv[i] > 0 && flage == true)
		{
			pe = i+1;
			flage = false;
		}
	}
	for (int i = 0; i < msize; i++)//Да намеря броя на трицифрените между едноцифрено и двуцифрено
	{
		if (masiv[i]<1000 && masiv[i]>99 && i>pe && i<pd)
		{
			br++;
		}
	}
	if (flage == true && flagd == true)
	{
		cout << "NO";
	}
	cout << endl;
	if (br != 0)
	{
		cout << br << endl;
	}
	system("pause");
	return 0;
}