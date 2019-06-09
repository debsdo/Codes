void levelOrder(Node* root)
{
  queue<Node*> q;
  
  if(root == NULL)
    return;
  q.push(root);
  q.push(NULL);
  while(q.size() > 1) {
      Node *temp = q.front();
      q.pop();
      
      if(temp == NULL) {
          q.push(NULL);
          cout<<"$ ";
      } else {
          if(temp -> left)
            q.push(temp -> left);
            
          if(temp -> right)
            q.push(temp -> right);
            
          cout<<temp->data<<" ";
        }
    
    }
    
    cout<<"$ ";

}
