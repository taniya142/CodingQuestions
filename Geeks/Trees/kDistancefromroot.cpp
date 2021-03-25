vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  if(root == NULL)
  {
      vector<int> v;
      return v;
  }
  if(k==0){
      vector<int> v;
      v.push_back(root->data);

      return v;
  }
  vector<int> a = Kdistance(root->left,k-1);
  vector<int> b = Kdistance(root->right,k-1);
  
  vector<int> ans;
  for(int i = 0; i < a.size(); i++)
    ans.push_back(a[i]);

 for(int i = 0; i < b.size(); i++)
    ans.push_back(b[i]);
    
return ans;
  
}