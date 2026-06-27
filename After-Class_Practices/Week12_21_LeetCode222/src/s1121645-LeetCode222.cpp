// AI生成
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        if (leftHeight == rightHeight) {
            return (1 << leftHeight) + countNodes(root->right);
        }

        return (1 << rightHeight) + countNodes(root->left);
    }

private:
    int height(TreeNode* node) {
        int h = 0;
        while (node != nullptr) {
            ++h;
            node = node->left;
        }
        return h;
    }
};
