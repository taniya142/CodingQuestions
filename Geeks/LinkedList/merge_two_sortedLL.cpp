 public static LinkedList mergeTwoSortedLists(LinkedList l1, LinkedList l2) {
            // write your code hered
            Node t1=l1.head;
            Node t2=l2.head;
            
            LinkedList mList=new LinkedList();
            
            while(t1!=null && t2!=null){
                if(t1.data<=t2.data){
                    mList.addLast(t1.data);
                    t1=t1.next;
                }
                else{
                    mList.addLast(t2.data);
                    t2=t2.next;
                }
            }
            while(t1!=null){
                mList.addLast(t1.data);
                t1=t1.next;
            }
            while(t2!=null){
                mList.addLast(t2.data);
                t2=t2.next;
            }
            return mList;
        }
    }