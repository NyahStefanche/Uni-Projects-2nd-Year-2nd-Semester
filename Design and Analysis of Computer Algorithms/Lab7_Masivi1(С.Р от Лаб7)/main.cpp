//Напълно вярна е и работи но съм почти сигурен че с масиви от броячи щеше да е по лесно - Лаб7 задача 1
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	system("chcp 1251");
	int n, h, indexf, indexl, number = 0, height, poredica = 1, ploshtadki = 0;
	bool flag = true, flag1 = true;
	cin >> n;
	vector<int> m;
	if (n >= 3 && n <= 200)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> h;
			if (h >= 3 && h <= 100)
			{
				m.push_back(h);
			}
		}
	}
	int msize = m.size();
	for (int i = 0; i < msize; i++)
	{
		if (number != m[i])
		{
			number = m[i];
			indexl = i - 1;
			if (poredica >= 3)
			{
				cout << "От " << indexf << " до " << indexl << " с височина " << height << " метра" << endl;
				ploshtadki++;
			}
			poredica = 1;
			flag = false;
		}
		else if (number == m[i])
		{
			height = m[i];
			if (flag == false)
			{
				indexf = i-1;
				flag = true;
			}
			poredica++;
			if (i + 3 >= msize)
			{
				flag1 = false;
				indexl = i;
			}
			if (poredica >= 3 && flag1==false)
			{
				cout << "От " << indexf << " до " << indexl << " с височина " << height << " метра" << endl;
				ploshtadki++;
			}
		}
	}
	cout << ploshtadki << " площадки" << endl;
	system("pause");
	return 0;
}