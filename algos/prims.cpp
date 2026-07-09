#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

pair<int, int> prim(vector<vector<pair<int, int>>>& graph, int vertices) {
    vector<bool> vis(vertices, false);

    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    pq.push({0, 0});

    int mstWeight = 0;

    int iter = 0;

    int cut = vertices;

    while (!pq.empty()) {
        iter++;

        auto [wt, vertex] = pq.top();
        pq.pop();

        // extra condition
        if(vertices == 0) return {mstWeight, iter};

        // if node visited skip;
        if (vis[vertex]){
            cut--;
            continue;
        }
            

        vis[vertex] = true;
        mstWeight += wt;

        for (auto [edgeWt, nextVertex] : graph[vertex]) {
            if (!vis[nextVertex]) {
                pq.push({edgeWt, nextVertex});
            }
        }
    }

    return {mstWeight, iter};
}

int main() {
    int vertices = 5;

    vector<vector<pair<int, int>>> adj = {
        {{10, 1}, {4, 4}},                    // 0
        {{10, 0}, {13, 4}, {16, 3}, {3, 2}},  // 1
        {{3, 1}, {10, 3}},                    // 2
        {{5, 4}, {16, 1}, {10, 2}},           // 3
        {{4, 0}, {13, 1}, {5, 3}}             // 4
    };

    pair<int, int> output = prim(adj, vertices);

    cout << "Minimum MST Weight: " << output.first << endl;
    cout << "Total iterations : " << output.second << endl;

    return 0;
}