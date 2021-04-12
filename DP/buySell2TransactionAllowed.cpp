#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // we are taking maximum of profit gain (if it has to be sold today only or upto today
     // (i.e today ya fir today se previous wale me se jo max hai) 
    
    int maxProfitIfSoldToday=0; // today if sold
    int leastSoFar=arr[0];
    int DPmaxProfitUptoToday[n];   // upto today if sold

    memset(DPmaxProfitUptoToday,0,sizeof(DPmaxProfitUptoToday));

    for(int i=1;i<n;i++){
    	if(arr[i]<leastSoFar){
    		leastSoFar=arr[i];
    	}
    	maxProfitIfSoldToday = arr[i] - leastSoFar;
    	if(maxProfitIfSoldToday > DPmaxProfitUptoToday[i-1]){
    		DPmaxProfitUptoToday[i] = maxProfitIfSoldToday;
    	}else{
    		DPmaxProfitUptoToday[i] = DPmaxProfitUptoToday[i-1];
    	}
    }

    // we are taking maximum of profit gain (if it has to be bought today only or upto today
     // (i.e today ya fir today se future wale me se jo max hai) 

    int maxProfitIfBuyToday=0;
    int maxSofar=arr[n-1];

    int DPmaxProfitIfBuyUptoToday[n];
    memset(DPmaxProfitIfBuyUptoToday,0,sizeof(DPmaxProfitIfBuyUptoToday));

    for(int i=n-2;i>=0;i--){
    	if(arr[i]>maxSofar){
    		maxSofar=arr[i];
    	}

    	maxProfitIfBuyToday=maxSofar-arr[i];

    	if(maxSofar > DPmaxProfitIfBuyUptoToday[i+1]){
    		DPmaxProfitIfBuyUptoToday[i]=maxProfitIfBuyToday;
    	}else{
    		DPmaxProfitIfBuyUptoToday[i]=DPmaxProfitIfBuyUptoToday[i+1];
    	}
    }

    int overAllProfit=0;

    for(int i=0;i<n;i++){
    	if(DPmaxProfitUptoToday[i] + DPmaxProfitIfBuyUptoToday[i] > overAllProfit){
    		overAllProfit=DPmaxProfitUptoToday[i] + DPmaxProfitIfBuyUptoToday[i];
    	}
    }

    cout<<overAllProfit<<endl;
}