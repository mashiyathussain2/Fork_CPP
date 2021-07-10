void postorder(Node *root){
  if(root != NULL){
    postorder(root->left);
    postorder(root->right);
    cout<<(root->key)<<" ";
  }
}
