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
    int m, k;
    cin >> m >> k;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];    
    }
    sort(all(a));
    ll sol = 0;
    for (int i = 1; (1<<i) <= m; i++){
        int n = (1<<i);
        int mid = n/2;
        ll tot = - (1ll * k * (n-1));
        for (int j = 0; j < mid; j++){
            tot -= a[j];
        }
        ll mul = i-1;
        int inc = 1;
        tot += a[m-1];
        for (int j = m-1; j > m-1-mid; j--){
            tot += 1ll * a[j] * mul;
            if (m-j == inc){
                inc *= 2;
                mul--;
            }
        }
        sol = max(sol, tot);
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
