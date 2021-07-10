void inorder(node *root){
  if(root != NULL){
    inorder(root->left);
    cout<<(root->key)<<" ";
    inorder(root->right);
  }
}
