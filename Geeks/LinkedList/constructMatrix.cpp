Node* constructLinkedMatrixPlus(int mat[MAX][MAX],int n,int i,int j){
    if(i>n-1 || j>n-1){
        return NULL;
    }
    Node *temp=new Node(mat[i][j]);
    temp->data=mat[i][j];
    temp->right=constructLinkedMatrixPlus(mat,n,i,j+1);
    temp->down=constructLinkedMatrixPlus(mat,n,i+1,j);
    
    return temp;
}
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    // code here
    Node *temp=constructLinkedMatrixPlus(mat,n,0,0);
    
    return temp;
    // Node* temp[MAX][MAX] = new Node(mat[MAX][MAX]);
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(j==n-1){
    //             temp[i][j]->right=NULL;
    //         }else if(i==n-1){
    //             temp[i][j]->down=NULL;
    //         }else{
    //             temp[i][j]->right=temp[i][j+1];
    //             temp[i][j]->down=temp[i+1][j];
    //         }
    //     }
    // }
    // return temp[n][n];
}