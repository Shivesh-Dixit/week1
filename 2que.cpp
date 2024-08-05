#include <iostream>

#include <bits/stdc++.h>

#define ll long long
#define pb push_back
using namespace std;

int main()
{
    vector<int> vt(5);
    cout << "enter the 5 numbers : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> vt[i];
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += vt[i];
    }
    int avg = sum / 5;
    cout << "the average of the numbers is : " << avg << endl;
    return 0;
}
