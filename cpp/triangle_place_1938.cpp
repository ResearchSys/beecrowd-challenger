#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
vector<pair<ll, ll> > v;
int n;

bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}


int main()
{
    ios_base :: sync_with_stdio(0); cin.tie(0);
   
    cin >> n;
    ll x, y;
   
    for (int i = 0 ; i < n ; ++i)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
   
    int ans = 0;
    sort(v.begin(), v.end(), cmp);
   
    for (int i = 0 ; i < n ; ++i)
    {
        pair<ll, ll> &p = v[i];
        ll r = INT_MAX, l = INT_MIN;
       
        for (int j = i + 1; j < n ; ++j)
        {
            pair<ll , ll > &p2 = v[j];
           
            bool direita = (p2.first > p.first);
           
            if (direita)
            {
                if (p2.first < r)
                {
                    ++ans;
                    r = p2.first;
                }
            }
            else
            {
                if (p2.first > l)
                {
                    l = p2.first;
                    ++ans;
                }
            }
        }
    }
    cout << ans << '\n';
}
