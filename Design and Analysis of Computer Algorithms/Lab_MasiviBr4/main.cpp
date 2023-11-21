#include <iostream>
#include <string>
using namespace std;

void fill_counter(string s,int*counter)
{
	int length = s.length();
	for (int i = 0; i < length; i++)
	{
		counter[(int)s[i] - 97]++;
	}
}

int max(int*counter)
{
	int max = 0, index = -1;
	for (int i = 0; i < 30; i++)
	{
		if (max < counter[i])
		{
			max = counter[i];
			index = i;
		}
	}
	return index;
}

void equals_to_max(int*counter)
{
	int maximum =counter[max(counter)];
	for (int i = 0; i < 30; i++)
	{
		if (maximum == counter[i])
		{
			cout <<(char)(i+97)<<" ";
		}
	}
	cout << endl;
}

void fill(int* counter)
{
	for (int i = 0; i < 30; i++)
	{
		counter[i] = 0;
	}
}

int main()
{
	string s;
	cin >> s;
	int counter[30];
	fill(counter);
	fill_counter(s,counter);
	cout << counter[max(counter)]<<" ";
	equals_to_max(counter);
	system("pause");
	return 0;
}