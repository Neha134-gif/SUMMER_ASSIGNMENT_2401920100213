#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};
class Codec {
public:

    string serialize(TreeNode* root) {

        if(root == NULL)
            return "";

        string ans = "";

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            TreeNode* temp = q.front();
            q.pop();

            if(temp == NULL) {
                ans += "#,";
            }
            else {
                ans += to_string(temp->val) + ",";
                q.push(temp->left);
                q.push(temp->right);
            }
        }

        return ans;
    }

    TreeNode* deserialize(string data) {

        if(data.size() == 0)
            return NULL;

        stringstream ss(data);
        string str;

        getline(ss, str, ',');

        TreeNode* root = new TreeNode(stoi(str));

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            TreeNode* temp = q.front();
            q.pop();

            getline(ss, str, ',');

            if(str != "#") {
                temp->left = new TreeNode(stoi(str));
                q.push(temp->left);
            }

            getline(ss, str, ',');

            if(str != "#") {
                temp->right = new TreeNode(stoi(str));
                q.push(temp->right);
            }
        }

        return root;
    }
};