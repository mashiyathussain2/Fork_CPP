void printkDist(Node*root, int k){
  if(root == NULL)
    return;
  if(k==0){
    cout<<(root->key)<<" ";
  }
  else{
    printkDist(root->left,k-1);
    printkDist(root->right,k-1);
  }
}
