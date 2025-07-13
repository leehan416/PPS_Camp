// https://www.acmicpc.net/problem/11724
#include <iostream>
#include <vector>

using namespace std;

class Node {
   public:
    bool visited = false;
    vector<Node*> list;
};

int DFS(Node* vertex) {
    if (vertex->visited) return 0;
    vertex->visited = true;
    for (Node* nodes : vertex->list) {
        DFS(nodes);
    }
    return 1;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    int num = 0;
    cin >> n >> m;

    vector<Node> nodes(n);

    for (int i = 0; i < m; ++i) {
        int v, tv;
        cin >> v >> tv;
        nodes[v - 1].list.push_back(&nodes[tv - 1]);
        nodes[tv - 1].list.push_back(&nodes[v - 1]);
    }

    for (int i = 0; i < n; ++i) {
        if (DFS(&nodes[i]))
            num++;
    }

    cout << num << "\n";
    return 0;
}