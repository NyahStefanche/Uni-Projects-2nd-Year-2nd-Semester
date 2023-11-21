#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

void GenMasiv(int* masiv, int br)//Генериране на масив
{
	for (int i = 0; i < br; i++)
	{
		masiv[i] = rand() % 100;
	}
}
void print_arr(int* masiv,int br)//Отпечатай масив
{
	for (int i = 0; i < br; i++)
	{
		cout << masiv[i] << " ";
	}
	cout << endl;
}
int MinEl(int* masiv, int br)
{
	int pos = 0;
	for (int i = 0; i < br; i++)
	{
		if (masiv[i] < masiv[pos])
		{
			pos = i;
		}
	}
	return pos;
}
int MaxEl(int* masiv, int br)
{
	int pos = 0;
	for (int i = 0; i < br; i++)
	{
		if (masiv[i] > masiv[pos])
		{
			pos = i;
		}
	}
	return pos;
}
double Mediana(int* masiv, int br)
{
	return (double)(masiv[MinEl(masiv, br)] + masiv[MaxEl(masiv, br)]) / 2;
}
int* new_masiv_gen(int* mm, int brm, int* mn, int brn, int* mk, int brk, int max)
{
	int* newm = new int[max];
	for (int i = 0; i < max; i++)
	{
		newm[i] = 0;
		if (i < brm)
		{
			newm[i] += mm[i];
		}
		if (i < brn)
		{
			newm[i] += mn[i];
		}
		if (i < brk)
		{
			newm[i] += mk[i];
		}
	}
	return newm;
}
double AVG_Chetni(int* masiv, int br)
{
	int suma = 0, count = 0;
	for (int i = 0; i < br; i++)
	{
		if (masiv[i] % 2 == 0)
		{
			suma += masiv[i];
			count++;
		}
	}
	if (suma != 0) return (double)suma / count;
	else return 0;
}

bool platform(int* masiv, int br,int&left,int&right)
{
	int max = 0, count = 1;
	for (int i = 1; i < br; i++)
	{
		if (masiv[i] > masiv[i - 1])
		{
			count++;
		}
		else
		{
			if (count > max)
			{
				max = count;
				right = i - 1;
			}
			count = 0;
		}
	}
	if (count > max)
	{
		max = count;
		right = br - 1;
	}
	if (max == 1)
	{
		return false;
	}
	left = right - max + 1;
	return true;
}
void replace(int* masiv, int br)
{
	int left, right;
	if (platform(masiv, br, left, right))
	{
		int avg = AVG_Chetni(masiv, br);
		int replace_number = avg != 0 ? avg : masiv[0];
		for (int i = left; i <= right; i++)
		{
			masiv[i] = replace_number;
		}
		print_arr(masiv, br);
	}
	else cout << "NONE" << endl;
}
int main()
{
	int m, n, k;
	cin >> m >> n >> k;
	int t = (int)time(0);
	srand(t);
	int* mm = new int[m]; //mm=Masiv с m елемента
	int* mn = new int[n]; //mn=Masiv с n елемента
	int* mk = new int[k]; //mk=Masiv с k елемента
	GenMasiv(mm, m);
	GenMasiv(mn, n);
	GenMasiv(mk, k);
	print_arr(mm,m);
	print_arr(mn,n);
	print_arr(mk,k);
	cout << Mediana(mm, m) << endl;
	cout << Mediana(mn, n) << endl;
	cout << Mediana(mk, k) << endl;
	int max = m;
	if (max < n) max = n;
	if (max < k) max = k;
	int* newmasiv = new_masiv_gen(mm, m, mn, n, mk, k, max);
	print_arr(newmasiv, max);
	replace(mm, m);
	replace(mn, n);
	replace(mk, k);
	system("pause");
	return 0;
}