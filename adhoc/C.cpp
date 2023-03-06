// CSES - Permutations
// https://cses.fi/problemset/task/1067
// Author: Renato Leite Camilo

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << "1\n";
    else if (n < 4)
        cout << "NO SOLUTION\n";
    else
    {
        cout << 2;
        for (int i = 4; i <= n; i += 2)
            cout << ' ' << i;
        for (int i = 1; i <= n; i += 2)
            cout << ' ' << i;
        cout << '\n';
    }
}
