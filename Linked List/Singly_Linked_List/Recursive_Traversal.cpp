void rprint(Node *head){
  if(head==NULL)
    return;
  cout<<(head->data)<<" ";
  rprint(head->next);
}
