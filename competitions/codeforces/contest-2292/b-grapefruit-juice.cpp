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
    int n, k, p;
    cin >> n >> k >> p;
    vector <ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(all(a));
    int pos = 0;
    bool mar = true;
    ll sol = 0;
    while (pos < n){
        ll sum = 0;
        if (pos+k > n) mar = false;
        for (int i = 0; i < k && pos < n; ++i)
            sum += a[pos++];
        if (sum > p)
            mar = false;
        if (mar) sol += p;
        else sol += sum;
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
