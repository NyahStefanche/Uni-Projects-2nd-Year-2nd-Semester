#include <iostream>
#include <vector>
using namespace std;
int main()
{
    system("chcp 1251");
    vector<int> chetni;
    vector<int> nechetni;
    int n;
    cout << "������ ����� �� ��������� �� 0: ";
    cin >> n;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            chetni.push_back(n);
        }
        else
        {
            nechetni.push_back(n);
        }
        cin >> n;
    }
    int csize = chetni.size();
    int nsize = nechetni.size();

    if (csize != 0)
    {
        cout << "���� �� ������� �����: " << csize << endl;
        cout << "������� ����� ��: ";
    }
    else
    {
        cout << "NONE";
    }
    for (int i = 0; i < csize; i++)
    {
        cout << chetni[i] << " ";
    }
    if (nsize != 0)
    {
    cout << endl << "���� �� ��������� ����� ��: " << nsize << endl;
    cout << "��������� ����� ��: ";
    }
    else
    {
        cout << "NONE";
    }
    for (int k = 0; k < nsize; k++)
    {
        cout << nechetni[k] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}