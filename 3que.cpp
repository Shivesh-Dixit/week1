#include <iostream>

#include <bits/stdc++.h>

#define ll long long
#define pb push_back
using namespace std;

int main()
{
    string s;
    cout << "enter the string : ";
    cin >> s;
    for (int i = 0; i < s.length() / 2; i++)
    {
        swap(s[i], s[s.length() - 1 - i]);
    }
    cout << endl
         << "after reversing, the string is : " << endl;
    cout << s << endl;
    return 0;
}
