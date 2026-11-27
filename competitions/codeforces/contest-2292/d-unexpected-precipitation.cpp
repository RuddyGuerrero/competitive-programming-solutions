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
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n), di(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> y[i];
        di[i] = x[i] - y[i];
    }
    ll sx = 0, sy = 0, solx = 0, soly = 0;
    for (int i = n-1; i >= 0; i--){
        sx = max(di[i] + solx, soly);
        sy = min(-di[i] + soly, solx);

        solx = sx;
        soly = sy;
    }    

    if (solx > 0){
        cout << "Sunny\n";
    } else {
        if (solx == 0){
            cout << "Draw\n";
        } else {
            cout << "Aubrey\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}
