void diagonalSum(Node *root,int level,map<int,int> &Map){
    if(root==NULL)
        return;
        
    diagonalSum(root->right,level,Map);
    Map[level]+=root->data;
    diagonalSum(root->left,level+1,Map);
}
vector <int> diagonalSum(Node* root) {
    // Add your code here
    
    vector<int> v;
    map<int,int> Map;
    map<int,int> :: iterator it;
    
    diagonalSum(root,0,Map);
    
    for(it=Map.begin();it!=Map.end();it++){
        v.push_back(it->second);
    }
    return v;
}