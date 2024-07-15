#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
using namespace std;

const int MAX = 1e5 + 5;
vector<int> adj[MAX];
ll val[MAX], dp[MAX], total[MAX], ans, K;

void dfs1(int u, int p) {
    total[u] = val[u];
    for (auto v : adj[u]) {
        if (v == p) continue;
        dfs1(v, u);
        total[u] += total[v];
    }
}

void dfs2(int u, int p) {
    dp[u] = total[u];
    for (auto v : adj[u]) {
        if (v == p) continue;
        dfs2(v, u);
        dp[u] = max(dp[u], dp[v]);
    }
}

void dfs3(int u, int p, ll sum) {
    ans = max(ans, sum);
    for (auto v : adj[u]) {
        if (v == p) continue;
        dfs3(v, u, sum - total[v] + max(total[1] - total[v], dp[v]) + K);
    }
}

long long maximumSum(int N, vector<vector<int>> edges, vector<int> A, int K_val) {
    K = K_val;
    for (int i = 1; i <= N; i++) {
        adj[i].clear();
        val[i] = A[i - 1];
    }
    for (int i = 0; i < N - 1; i++) {
        int u = edges[i][0], v = edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs1(1, 0);
    dfs2(1, 0);
    ans = dp[1];
    dfs3(1, 0, dp[1]);
    return ans;
}

int main() {
    // Example test case
    int N = 5;
    vector<vector<int>> edges = {{1, 2}, {1, 3}, {3, 4}, {3, 5}};
    vector<int> A = {1, 2, 3, 4, 5};
    int K_val = 10;

    cout << "Maximum sum: " << maximumSum(N, edges, A, K_val) << endl;

    return 0;
}
