// Codeforces - The Useless Toy
// https://codeforces.com/problemset/problem/834/A
// Author: Renato Leite Camilo

#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b, c = "^>v<";
    int n, i;
    cin >> a >> b >> n;
    n %= 4;
    for(i = 0; i < 4; i++)
        if(a[0] == c[i])
            break;
    if(n%2 == 0)
        cout << "undefined\n";
    else if(c[(i+n)%4] == b[0])
        cout << "cw\n";
    else
        cout << "ccw\n";
}