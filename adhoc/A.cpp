// CSES - Weird Algorithm
// https://cses.fi/problemset/task/1068
// Author: Renato Leite Camilo

#include <bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
int main()
{
    ll n;
    cin >> n;
    while (n > 1)
    {
        cout << n << ' ';
        if (n % 2)
            n = n * 3 + 1;
        else
            n /= 2;
    }
    cout << n << '\n';
}