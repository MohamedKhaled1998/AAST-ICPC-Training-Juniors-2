//
// Created by Mohamed Khaled Mostafa on 12/24/21.
//

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define all(s) s.begin(),s.end()
#define rall(s) s.rbegin(),s.rend()
#define vi vector<ll>
#define ii pair<int,int>
const int N = 5e5 + 100;
ll gcd(ll a, ll b)
{
    return (b ? gcd(b, a % b) : a);
}
void solve()
{
    int n;
    cin >> n;
    int current = 2;
    while(true)
    {
        int need = n - current - 1;
        if(gcd(current, need) == 1)
        {
            cout<<current<<' '<<need<<' '<<1<<'\n';
            return;
        }
        current++;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}