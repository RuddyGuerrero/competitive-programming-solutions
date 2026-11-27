#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << '\n'
#else
#define dbg(x)
#endif

void solve() {
    ll a, x, k;
    cin >> a >> x >> k; k++;
    ll fin = 30ll * (k) + 5; 
    ll ini = 0, sol = 0;
    while (ini <= fin) {
        ll piv = (ini + fin) / 2ll;

        ll sx = a + piv * x;
        ll sa = piv / k;
        ll sy = ((1ll<<sa)-1ll) * (k - piv%k) + ((1ll<<(sa+1ll))-1ll) * (piv%k);
       
        if (sx > sy) ini = piv+1ll, sol = sx;
        else fin = piv - 1ll;
    }
    cout << sol << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}
