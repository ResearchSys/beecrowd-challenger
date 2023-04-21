#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
struct ponto
{
    ll x, y;
    ponto() {}
    ponto(ll _x, ll _y) : x(_x), y(_y) {}
};

struct qd
{
    ponto inf, sup;
    qd(){}
    qd(ponto _inf, ponto _sup) : inf(_inf), sup(_sup) {}
};

qd toqd(ll x, ll y, ll l)
{
    return qd(ponto(x - l, y - l), ponto(x + l, y + l));
}

ll deuc(ponto & a, ponto &b)
{
    ll dx = a.x - b.x, dy = a.y - b.y;
    return dx * dx + dy * dy;
}

ll dist(qd &a, qd &b)
{
    if (a.inf.x > b.inf.x) return dist(b, a);
    if (b.inf.x <= a.sup.x)
    {
        if (b.inf.y > a.sup.y) return b.inf.y - a.sup.y;
        if (b.sup.y < a.inf.y) return a.inf.y - b.sup.y;
        return 0;
    }
    if (b.inf.y > a.sup.y) return deuc(b.inf, a.sup);
    if (b.sup.y < a.inf.y)
    {
        ponto x = ponto(b.inf.x, b.sup.y);
        ponto y = ponto(a.sup.x, a.inf.y);
        return deuc(x, y);
    }
    return b.inf.x - a.sup.x;
}

int main()
{   
    ios_base :: sync_with_stdio(0);
//    cin.tie(0);
   
    vector<qd> v;
   
    ll x, y, l;
   
    int flag;
    ll aah;
    register int n;
   
    scanf("%d %lld", &n, &aah);
//    cin >> n >> aah;
   
    aah = (2 * aah) * (2 * aah);
    for(register int i = 0 ; i < n ; ++i)
    {
        scanf("%lld %lld %lld", &x, &y, &l);
//        cin >> x >> y >> l;
        v.push_back(toqd(x << 1, y << 1, l));
    }
   
    flag = 0;
    for (register int i = 0; i < n - 1; ++i)
    {
        if (dist(v[i], v[i + 1]) > aah)
        {
            flag = 1;
            break;
        }
    }
   
    if (flag) puts("OUCH");
    else puts("YEAH"); /*
    if (flag) cout << "OUCH\n";
    else cout << "YEAH\n";*/
}
