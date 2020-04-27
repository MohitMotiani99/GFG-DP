#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n,x,y,z;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    cin>>x>>y>>z;
	    int minr=min(min(x,y),z);
	    //cout<<minr<<endl;
	    int arr[n+1];
	    for(int j=0;j<=n;j++)
	    arr[j]=0;
	    for(int j=1;j<=n;j++){
	        if(j<minr)
	        arr[j]=0;
	        else
	        {
	            if(j>=x && arr[j-x]!=0)
	            arr[j]=max(arr[j],1+arr[j-x]);
	            if(j>=y && arr[j-y]!=0)
	            arr[j]=max(arr[j],1+arr[j-y]);
	            if(j>=z && arr[j-z]!=0)
	            arr[j]=max(arr[j],1+arr[j-z]);
	            
	            if((j==x || j==y || j==z) && arr[j]==0)
	            arr[j]=1;
	            
	        }
	    }
	    for(int j=0;j<=n;j++)
	    cout<<arr[j]<<" ";
	    cout<<endl;
	    cout<<arr[n]<<endl;
	}
	return 0;
}
