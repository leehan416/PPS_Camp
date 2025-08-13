#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int temp = 0;

class Node {
   public:
    bool visited = false;
    vector<Node *> adjacencyList;
};

void DFS(Node *node) {
    temp++;
    node->visited = true;
    for (Node *n : node->adjacencyList) {
        if (!n->visited) DFS(n);
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<Node> nodes(n + 1);

    for (int i = 0; i < m; ++i) {
        int nodeA, nodeB;
        cin >> nodeA >> nodeB;
        nodes[nodeA].adjacencyList.push_back(&nodes[nodeB]);
        nodes[nodeB].adjacencyList.push_back(&nodes[nodeA]);
    }

    DFS(&nodes[1]);
    cout << temp - 1 << "\n";
    return 0;
}