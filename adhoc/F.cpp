// Codeforces - Double Cola
// https://codeforces.com/problemset/problem/82/A
// Author: Renato Leite Camilo

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    string ans[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"}; 
    n--;
    int a  = 1;
    while(5*a <= n){
        n -= 5*a;
        a*=2;
    } 
    cout << ans[n/a] << '\n';
}