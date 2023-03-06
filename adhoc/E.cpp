// Codeforces - Garden
// https://codeforces.com/problemset/problem/915/A
// Author: Renato Leite Camilo

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n ; i++)
        cin >> a[i];
    sort(a.begin(), a.end(), greater<>());
    int i = 0;
    for(i ; i < n; i++)
        if(k % a[i] == 0)
            break;
    cout << k / a[i] << '\n';
}