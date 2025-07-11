#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = right = nullptr;
    }
};
// Function to build tree from level-order array representation
Node* buildTree(vector<int>& arr, int i, int n) {
    if (i >= n || arr[i] == INT_MIN) return nullptr;  

    Node* root = new Node(arr[i]);  
    root->left = buildTree(arr, 2 * i + 1, n);  
    root->right = buildTree(arr, 2 * i + 2, n); 

    return root;
}
vector<int> topView(Node* root) {
    vector<int> ans;
    map<int, int> mp; // {level, element}
    if (!root) return ans;
    queue<pair<Node*, int>> q; // {Node, level} 
    q.push({root, 0});
    while (!q.empty()) {
            auto pair = q.front();
            q.pop();
            Node* temp = pair.first;
            int level = pair.second;

            if (mp.find(level) == mp.end()) {
                mp[level] = temp->val; 
            }

            if (temp->left) q.push({temp->left, level - 1});
            if (temp->right) q.push({temp->right, level + 1});
        
    }
    // Extract values from map into result vector
    for (auto& pair : mp) {
        ans.push_back(pair.second);
    }
    return ans;
}
int main(){
    vector <int> arr = {1,2,3,4,5,INT_MIN,6,INT_MIN,7,8};
    Node* root = buildTree(arr,0,arr.size());
    vector <int> nums = topView(root);
    for(int ele : nums) cout<<ele<<" ";
    return 0;
}