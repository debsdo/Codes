int diameterNode(Node* root, int &ans)
{
   if (root == NULL)
        return 0;
        
    int lheight = diameterNode(root -> left, ans);
    int rheight = diameterNode(root -> right, ans);
    
    ans = max(ans, 1+lheight+rheight);
    
    return 1+max(lheight,rheight);
}

int diameter(Node* root) {
    int ans = 0;
    diameterNode(root,ans);
    return ans;
}
