#include <iostream>
#include <vector>
using namespace std;
#define ll long long
const int MAX = 1e5+5;
vector<int> adj[MAX];
ll val[MAX], dp[MAX], total[MAX], ans, K;

void dfs1(int u, int p){
    total[u] = val[u];
    for(auto v: adj[u]){
        if(v == p) continue;
        dfs1(v, u);
        total[u] += total[v];
    }
}

void dfs2(int u, int p){
    dp[u] = total[u];
    for(auto v: adj[u]){
        if(v == p) continue;
        dfs2(v, u);
        dp[u] = max(dp[u], dp[v]);
    }
}

void dfs3(int u, int p, ll sum){
    ans = max(ans, sum);
    for(auto v: adj[u]){
        if(v == p) continue;
        dfs3(v, u, sum - total[v] + max(total[1] - total[v], dp[v]) + K);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        int N; cin >> N >> K;
        for(int i = 1; i <= N; i++){
            adj[i].clear();
            cin >> val[i];
        }
        for(int i = 1; i < N; i++){
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs1(1, 0);
        dfs2(1, 0);
        ans = dp[1];
        dfs3(1, 0, dp[1]);
        cout << ans << "\n";
    }
    return 0;
}

int longestSubarray(int n, int x, int y, vector<int>& a) {
    int max_len = 0;
    int left = 0;
    int type1_used = 0;
    int type2_used = 0;

    for (int right = 0; right < n; ++right) {
        if (a[right] > 0) {
            if (a[right] <= x - type1_used) {
                
                type1_used += a[right];
            } else if (type2_used < y) {
               
                type2_used++;
            } else {
               
                while (left <= right && (type1_used + (a[right] - (x - type1_used)) > x || type2_used >= y)) {
                    if (a[left] > 0) {
                        if (a[left] <= x - type1_used) {
                            type1_used -= a[left];
                        } else {
                            type2_used--;
                        }
                    }
                    left++;
                }

                if (a[right] <= x - type1_used) {
                    type1_used += a[right];
                } else {
                    type2_used++;
                }
            }
        }

        max_len = max(max_len, right - left + 1);
    }

    return max_len;
}
