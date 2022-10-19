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

char getMaxOccChar(string s){    // creating array of alphabeta  and increamenting it when finding 
    int arr[26] ={0};


// -----  Create an array of cout of 
    for(int i = 0; i<s.length();i++){
        char ch = s[i];
        //   lower case
        int number =0;

        if(ch <= 'a'  && ch <= 'z'){
            number = ch - 'a';
        }
        else{ // upper case 
            number = ch - 'a';
        }
        arr[number]++;
         
    }
    int maxi = -1 , ans = -1;
    for(int i = 0;i<26;i++){
        if(maxi < arr[i] ){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalans = 'a' + ans;
    return finalans;


}

int main()
{
    string s;
    cout<<" enter the string "<<endl;
    cin >> s;

    cout<< getMaxOccChar(s)<<endl;
 

    return 0;
}