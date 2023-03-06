// CSES - Repetitions
// https://cses.fi/problemset/task/1069
// Author: Renato Leite Camilo

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    char input[1000010];
    cin >> input;
    int ans = 0, cnt = 1;
    for (int i = 1; input[i] != '\0'; i++)
    {
        if (input[i] == input[i - 1])
            cnt++;
        else{
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans = max(ans, cnt);
    cout << ans << '\n';
}