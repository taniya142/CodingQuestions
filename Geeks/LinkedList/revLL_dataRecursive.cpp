   // --------------------HEAP CHANGE data recursive--------------------------
    Node lo;
    
    public void reverseHelper(Node hi,int lev){
        if(hi==null){
            return;
        }
        reverseHelper(hi.next,lev+1);
        
        if(lev>size/2){
            int temp=hi.data;
            hi.data=lo.data;
            lo.data=temp;
            
            lo=lo.next;
        }
    }

    public void reverseDR() {
      // write your code here
      lo=head;
      reverseHelper(head,1);
    }




// ----------------------------------STACK CHANGE--------------------------
   // public Node reverseHelper(Node hi,int lev){
   //      if(hi==null){
   //          return head;
   //      }
   //      Node lo=reverseHelper(hi.next,lev+1);
        
   //      if(lev>size/2){
   //          int temp=hi.data;
   //          hi.data=lo.data;
   //          lo.data=temp;
   //      }
        
   //      return lo.next;
   //  }

   //  public void reverseDR() {
   //    // write your code here
      
   //    reverseHelper(head,1);
   //  }


  // --------------------------------pointer recursive-------------
    //     private void reversePRHelper(Node curr){
    //   // write your code here
    //   if(curr==tail){
    //       return;
    //   }
      
    //   reversePRHelper(curr.next);
      
      
    //   Node n=curr.next;
    //   n.next=curr;
      
    // }

    // public void reversePR(){
    //   // write your code here
    //   reversePRHelper(head);
      
    //    head.next=null;
      
    //   Node temp=head;
    //   head=tail;
    //   tail=temp;
    // }
  