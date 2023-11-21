#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> kids;
	int hdoor;
	int n;
	int hkids;
	int br=0;
	cin >> hdoor;
	cin >> n;
	if (n <= 200)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> hkids;
			kids.push_back(hkids);
		}
	}
	int ksize = kids.size();
	for (int k = 0; k < ksize; k++)
	{
		if (kids[k] < hdoor)
		{
			cout << k+1 << " ";
			br++;
		}
	}
	cout << endl << br << endl;
	system("pause");
	return 0;
}