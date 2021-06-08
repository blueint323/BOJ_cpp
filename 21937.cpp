#include <bits/stdc++.h>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
typedef long double ld;
#define ct(x) cout << x << '\n'
#define ct2(x, y) cout << x << ' ' << y << '\n'
#define ct3(x, y, z) cout << x << ' ' << y << ' ' << z << '\n'
#define ct4(x, y, z, w) cout << x << ' ' << y << ' ' << z << ' ' << w << '\n'

const ll mod = 1e9+7;
int dy[4] = {1, 0, -1, 0}, dx[4] = {0, 1, 0, -1};


ll gcd(ll a, ll b) {
    if (b) return gcd(b, a%b);
    return a;
}

ll ceil(ll a, ll b) {
    return (a-1)/b + 1;
}

void debug() {

}

int N, M, ans = 0;
vector<int> adj[101010];
int visit[101010];

void DFS(int curr) {
    for (auto i: adj[curr]) {
        if (!visit[i]) {
            ans++;
            visit[i] = 1;
            DFS(i);
        }
    }
}

void solve() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b; cin >> a>> b;
        adj[b].push_back(a);
    }
    int k; cin >> k;
    DFS(k);
    ct(ans);
}



int main() {
    FASTIO
    ll T=1;
    while (T--) solve();
} 