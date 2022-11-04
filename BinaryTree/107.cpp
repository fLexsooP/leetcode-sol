#include <iostream>
#include <vector>
#include <queue>

using namespace std;
// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution
{
public:
    // recursive
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {

    }
};

int main(int argc, char const *argv[])
{
    TreeNode node = TreeNode(1);
    node.left = new TreeNode(2);
    node.right = new TreeNode(3);
    node.left->left = new TreeNode(4);
    node.left->right = new TreeNode(5);
    node.right->left = new TreeNode(6);
    node.right->right = new TreeNode(7);
    /*
                1
        2               3
    4       5       6       7
    */
    Solution s = Solution();
    vector<vector<int>> vec = s.levelOrderBottom(&node);

    cout << '[';
    for (auto &&n : vec)
    {
        cout << '[';
        for (auto &&v : n)
        {
            cout << v << ' ';
        }
        cout << ']';
    }
    cout << ']';
    return 0;
}
