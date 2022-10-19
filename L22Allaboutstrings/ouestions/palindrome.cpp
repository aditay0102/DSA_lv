#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool ischar(char a)
{

    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0'))
    {
        return 1;
    }
    return 0;
};

char uptoLow(char a)
{
    if (a >= 'a' && a <= 'z')
    {
        return a;
    }
    else
    {
        char temp = a - 'A' + 'a';
        return temp;
    }
};

bool palidrom(string a)
{
    int s = 0;
    int e = a.size() - 1;

    while (s < e)
    {
        swap(a[s++], a[e--]);
    }
    return 1;
}

int main()
{

    string name = "A man, a plan, a canal: Panama";

    string pali = "";
    cout << name << endl;

    for (int i = 0; i < name.size(); i++)
    {
        if (ischar(name[i]))
        {

            pali.push_back(name[i]);
        }
    }

    for (int i = 0; i < pali.size(); i++)
    {
        pali[i] = uptoLow(pali[i]);
    }

    if (palidrom(name))
    {
        cout << " palidrom" << endl;
    }
    else
    {
        cout << " somtehin gis wrong" << endl;
    }

    return 0;
}