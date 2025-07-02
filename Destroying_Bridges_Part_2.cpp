#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// Union-Find data structure with path compression and union by rank
class UnionFind {
public:
    UnionFind(int n) : parent(n), rank(n, 0) {
        iota(parent.begin(), parent.end(), 0);
    }
    
    int find(int u) {
        if (parent[u] != u) {
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }
    
    bool unite(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);
        
        if (rootU != rootV) {
            if (rank[rootU] > rank[rootV]) {
                parent[rootV] = rootU;
            } else if (rank[rootU] < rank[rootV]) {
                parent[rootU] = rootV;
            } else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
            return true;
        }
        return false;
    }

private:
    vector<int> parent;
    vector<int> rank;
};

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        long long C;
        cin >> N >> C;
        
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        vector<tuple<long long, int, int>> bridges;
        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                bridges.emplace_back(static_cast<long long>(A[i]) * A[j], i, j);
            }
        }
        
        sort(bridges.begin(), bridges.end());
        
        UnionFind uf(N);
        long long total_cost = 0;
        
        for (const auto& [cost, u, v] : bridges) {
            if (total_cost + cost > C) break;
            if (uf.unite(u, v)) {
                total_cost += cost;
            }
        }
        
        int components = 0;
        for (int i = 0; i < N; ++i) {
            if (uf.find(i) == i) components++;
        }
        
        cout << components << endl;
    }
    
    return 0;
}
