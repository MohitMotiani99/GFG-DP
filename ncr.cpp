#include <iostream>
#include<bits/stdc++.h>
#define mod ((long)pow(10,9)+7)
using namespace std;

int main() {
	//code
	int t,n,r;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>r;
	    if(n<r)
	    cout<<"0"<<endl;
	    else{
	        int C[r+1];
	        memset(C,0,r+1);
	        
	        C[0]=1;
	        for(int j=1;j<=n;j++){
	            for(int k=min(j,r);k>0;k--){
	                C[k]=(C[k]%mod+C[k-1]%mod)%mod;
	            }
	        }
	        
	        cout<<C[r]<<endl;
	    }
	}
	return 0;
}
