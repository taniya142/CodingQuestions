// if there are elemnts with twice occurrence and one which is thrice then also same code 
// basically if askef odd number of occurrences while others occurence is twice
#include <iostream>
using namespace std;
 
int findSingle(int ar[], int ar_size)
    {
        // Do XOR of all elements and return
        int res = ar[0];
        for (int i = 1; i < ar_size; i++)
            res = res ^ ar[i];
 
        return res;
    }
 
// Driver code
int main()
    {
        int n;
        cin>>n;

        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        cout << "Element occurring once is "
             << findSingle(ar, n);
        return 0;
    }