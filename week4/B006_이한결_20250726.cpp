#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Node {
   public:
    bool visited = false;
    int value;
    vector<Node *> adjacencyList;
};

bool isBigger(Node *a, Node *b) {
    return a->value < b->value;
}

void sortVertex(vector<Node *> &adjacencyList) {
    sort(adjacencyList.begin(), adjacencyList.end(), isBigger);
}

void DFS(Node *node) {
    node->visited = true;
    cout << node->value << " ";
    sortVertex(node->adjacencyList);
    for (Node *n : node->adjacencyList) {
        if (!n->visited) DFS(n);
    }
}

void BFS(vector<Node> &nodes, int v) {
    queue<Node *> q;
    Node *start = &nodes[v - 1];
    start->visited = true;
    q.push(start);

    while (!q.empty()) {
        Node *node = (q.front());
        q.pop();
        cout << node->value << " ";
        node->visited = true;
        sortVertex(node->adjacencyList);
        for (Node *n : node->adjacencyList) {
            if (!n->visited) {
                n->visited = true;
                q.push(n);
            }
        }
    }
    cout << "\n";
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m, v;
    cin >> n >> m >> v;

    vector<Node> nodes(n);

    for (int i = 0; i < n; ++i) {
        nodes[i].value = i + 1;
    }

    for (int i = 0; i < m; ++i) {
        int nodeA, nodeB;
        cin >> nodeA >> nodeB;
        nodes[nodeA - 1].adjacencyList.push_back(&nodes[nodeB - 1]);
        nodes[nodeB - 1].adjacencyList.push_back(&nodes[nodeA - 1]);
    }

    DFS(&nodes[v - 1]);
    cout << "\n";
    for (int i = 0; i < n; ++i) {
        nodes[i].visited = false;
    }
    BFS(nodes, v);

    return 0;
}