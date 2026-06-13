#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int diameter = 0;

int height(TreeNode* node){
     if(node == NULL)
        return 0;

    int left = height(node->left);
    int right = height(node->right);

    diameter = max(diameter, left + right);

    return 1 + max(left, right);
}

int user_logic(TreeNode* root) {
     diameter = 0;
    height(root);
    return diameter;

}

TreeNode* construct_tree(int i, const vector<pair<int, int>>& nodes) {
    if (i < 0 || i >= nodes.size()) {
        return nullptr;
    }
    TreeNode* node = new TreeNode(i + 1);
    if (nodes[i].first != -1) {
        node->left = construct_tree(nodes[i].first - 1, nodes);
    }
    if (nodes[i].second != -1) {
        node->right = construct_tree(nodes[i].second - 1, nodes);
    }
    return node;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> nodes(n);
    for (int i = 0; i < n; ++i) {
        cin >> nodes[i].first >> nodes[i].second;
    }
    TreeNode* root = construct_tree(0, nodes);
    int result = user_logic(root);
    cout << result << endl;
    return 0;
}