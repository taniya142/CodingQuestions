public int kthFromLast(int k){
      // write your code here
      Node slow = head;
      Node fast = head;
      
      for(int i=0;i<k;i++){
          fast=fast.next;
      }
      while(fast.next!=null){
          slow=slow.next;
          fast=fast.next;
      }
      
      return slow.data;
      
      
    }

    // if k=3
    // s       f
    // 2 3 4 5 6 7 4 8 2
    //   s       f
    //     s       f
    //       s       f
    //          s      f

      // final answer is 7 when f is on last