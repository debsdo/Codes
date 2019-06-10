void leftView(Node *root)
{
   if(root == NULL)
    return;
   queue<Node*> q;
   q.push(root);
   Node *back = NULL;
   while(!q.empty()) {
       Node *temp = q.front();
       if(back == NULL) {
           cout<<temp->data<<" ";
           q.push(NULL);
       } if(temp != NULL) {
           if(temp -> left)
                q.push(temp -> left);
           if(temp -> right)
                q.push(temp -> right);
       }
       back = q.front();
       q.pop();
   }
   
