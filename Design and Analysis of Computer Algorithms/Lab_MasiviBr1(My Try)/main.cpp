//���1 �� ���3.docx - �����������
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
	cout << "������ ���� ����������� �����: "; cin >> n;
	int a[20];
	//��������� �� ������� � �����
	for (int i = 0; i < 20; i++)
	{
		a[i] = n % 10;
		n /= 10;
		if (a[i] == check(a))
		{
			cout << a[i] << " ";
		}
	}
	//�������� �� ��������� ��
	/*for (int p = 0; p < 20; p++)
	{
		if (a[p] == check(a))
		{
			cout << a[p]<<" ";
		}
	}*/
	cout << endl;
	//�����������
	/*for (int k = 0; k < 20; k++)
	{
		cout << a[k] << " ";
	}*/
	system("pause");
	return 0;
}