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
    int l, a, b;
    cin >> l >> a >> b;
    vector <bool> m1(l, false);
    vector <bool> m2(l, false);
    int p = 0, sol = 0;
    while (m1[p] == false){
        m1[p] = true;
        p = (p+a)%l;
    }
    p = 0;
    while (m2[p] == false){
        if (m1[p] == true) sol++;
        m2[p] = true;
        p = (p+b)%l;
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
