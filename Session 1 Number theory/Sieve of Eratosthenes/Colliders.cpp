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
vector<map<ll, int>> factorizations;

map<ll, int> Factorize(ll n)
{
    map<ll, int> ret;
    for (ll i = 2; i * i <= n; i += 1 + (i & 1))
    {
        while (n % i == 0)
        {
            ret[i]++;
            n /= i;
        }
    }
    if (n > 1)
        ret[n]++;
    return ret;
}

vector<bool> isOn;
vector<set<int>> factor;

void solve()
{
    int n, m;
    cin >> n >> m;
    factorizations.assign(n + 1, map<ll, int>());
    isOn.assign(n + 1, false);
    factor.assign(n + 1, set<int>());
    for (int i = 1; i <= n; ++i)
    {
        factorizations[i] = Factorize(i);
    }
    while (m--)
    {
        char op;
        int value;
        cin >> op >> value;
        if(op == '+')
        {
            if(isOn[value])
            {
                cout << "Already on\n";
            }
            else
            {
                bool bad = false;
                for(auto it = factorizations[value].begin(); it != factorizations[value].end(); ++it)
                {
                    if(factor[it->first].size() > 0)
                    {
                        cout<<"Conflict with " << *factor[it->first].begin() << '\n';
                        bad = true;
                        break;
                    }
                }
                if(!bad)
                {
                    for(auto it = factorizations[value].begin(); it != factorizations[value].end(); ++it)
                        factor[it->first].insert(value);
                    isOn[value] = true;
                    cout << "Success\n";
                }
            }
        }
        else
        {
            if(!isOn[value])
            {
                cout << "Already off\n";
            }
            else
            {
                for(auto it = factorizations[value].begin(); it != factorizations[value].end(); ++it)
                    factor[it->first].erase(value);
                isOn[value] = false;
                cout<<"Success\n";
            }
        }
    }

}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--)
        solve();
}