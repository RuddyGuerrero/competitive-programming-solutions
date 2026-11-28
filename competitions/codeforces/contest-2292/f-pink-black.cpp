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

#define MAXN 200015

int T[MAXN], low[MAXN], Ran[MAXN], Id[MAXN], L;
int n, m;
vector <int> g[MAXN];
stack <int> S;
bool mk[MAXN], ok[MAXN];

void build() {
    for (int i = 0; i <= 2*n; i++) {
        T[i] = low[i] = 0;
        Id[i] = i;
        Ran[i] = 1;
        ok[i] = mk[i] = false;
        g[i].clear();
    }
    L = 0;
}

int find_set(int v) {
    if (v == Id[v])
        return v;
    return Id[v] = find_set(Id[v]);
}

void join_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b){
        if (Ran[a] < Ran[b])
            swap(a, b);
        Ran[a] += Ran[b];
        Id[b] = a;
    }
}

void SCC(int np){
	T[np] = low[np] = ++L;
	int l = g[np].size();
	S.push(np);
	for(int i = 0; i < l; i++){
		int nh = g[np][i];
		if(!T[nh]){
			SCC(nh);
			low[np] = min(low[nh], low[np]);
		}
		else
			if(!mk[nh])
				low[np] = min(T[nh], low[np]);
	}

	if(low[np] == T[np]){
        int con = 0;
		while(S.top() != np){
			mk[S.top()] = true;
			S.pop();
            con++;
		}
		mk[S.top()] = true;
		int nod = S.top();
		S.pop();
        con++;
        if (con > 1) ok[find_set((nod-1)%n + 1)] = true;
	}
}


void solve() {
    cin >> n >> m;
    build();
    for (int i = 0; i < m; i++){
        int u, v, c;
        cin >> u >> v >> c;
        int o = 3 - c;
        g[u + n*(o-1)].push_back(v + n*(c-1));
        g[v + n*(o-1)].push_back(u + n*(c-1));
        join_sets(u, v);
    }

    for(int i = 1; i <= 2*n; i++)
		if(!mk[i])
			SCC(i);

    int sol = 0;
    for (int i = 1; i <= 2*n; i++){
        int id = find_set(i);
        if (id == i && ok[id]) sol++;
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
