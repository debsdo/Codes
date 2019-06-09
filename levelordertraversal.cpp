void levelOrder(Node* root)
{
  //Your code here
  queue<Node*> q;
  
  if(root == NULL)
    return;
    
  q.push(root);
  
  while(!q.empty()) {
      
      Node *temp = q.front();
      
      if(temp){
      
        cout<<temp -> data<<" ";
      
        if(temp ->left) 
          q.push(temp -> left);
        if(temp -> right)
          q.push(temp -> right);
        }
    
        q.pop();
    }
    
}
