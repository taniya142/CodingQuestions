class Solution{
  public:
  
  void verticalSumInner(Node* root,int hd, map<int,int> &Map){
      if(root==NULL)
        return;
        
        verticalSumInner(root->left,hd-1,Map);
        Map[hd]+=root->data;
        verticalSumInner(root->right,hd+1,Map);
  }
    vector <int> verticalSum(Node *root) {
        // add code here.
        
        vector <int> v;
        map<int,int> Map;
        map < int, int> :: iterator it;
        
        verticalSumInner(root,0,Map);
        
        for(it=Map.begin();it!=Map.end();it++){
            v.push_back(it->second);
        }
        
        return v;
        // for(int i=0;i<v.size();i++){
            
        // }
    }
};