  
  public static boolean areSimilar(Node n1, Node n2) {
    // write your code here
    
    if(n1.children.size()!=n2.children.size()){
        return false;
    }
    
    for(int i=0;i<n1.children.size();i++){
        Node c1=n1.children.get(i);
        Node c2=n2.children.get(i);
        
        if(areSimilar(c1,c2)==false){
            return false;
        }
    }
    
    return true;
  }


    public static boolean areMirror(Node n1, Node n2) {
    // write your code here
    if(n1.children.size()!=n2.children.size()){
        return false;
    }
    
    for(int i=0;i<n1.children.size();i++){
        int j=n2.children.size() -1 -i;
        
        Node c1=n1.children.get(i);
        Node c2 = n2.children.get(j);
        
        if(areMirror(c1,c2)==false){
            return false;
        }
    }
    
    return true;
  }


  //-------------------------------------------------------------------------------------------------------------------

  //SYMMETRIC
   public static boolean areMirror(Node n1,Node n2) {
       if(n1.children.size()!=n2.children.size()){
           return false;
       }
       for(int i=0;i<n1.children.size();i++){
            int j=n2.children.size()-1-i;
            
            Node c1=n1.children.get(i);
            Node c2=n2.children.get(j);
            if(areMirror(c1,c2)==false){
                return false;
            }
       }
        return true;
       
   }

  public static boolean IsSymmetric(Node node) {
    // write your code here
    return areMirror(node,node);
  }