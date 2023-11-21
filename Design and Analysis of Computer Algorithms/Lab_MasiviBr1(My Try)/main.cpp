//Зад1 от зад3.docx - Недовършена
#include <iostream>
using namespace std;
int check(int* m)
{
	int ch = -1;
	for (int i = 0; i < 20; i++)
	{
		if (ch + 1 == m[i]) return m[i];
		else return false;
		ch++;
	}
}
int main()
{
	system("chcp 1251");
	int n;
	cout << "Въведи цяло положително число: "; cin >> n;
	int a[20];
	//Въвеждане на числата в масив
	for (int i = 0; i < 20; i++)
	{
		a[i] = n % 10;
		n /= 10;
		if (a[i] == check(a))
		{
			cout << a[i] << " ";
		}
	}
	//Проверка за повтарящи се
	/*for (int p = 0; p < 20; p++)
	{
		if (a[p] == check(a))
		{
			cout << a[p]<<" ";
		}
	}*/
	cout << endl;
	//Отпечатване
	/*for (int k = 0; k < 20; k++)
	{
		cout << a[k] << " ";
	}*/
	system("pause");
	return 0;
}