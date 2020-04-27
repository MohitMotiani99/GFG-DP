#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool subset(int sum1,int sum2,int *arr,int n){
    //cout<<sum1<<"        "<<sum2<<endl;
    
    if(n==1)
    {
        if((sum1+arr[0]==sum2)||(sum2+arr[0]==sum1))
            return true;
        return false;
    }
    
    return subset(sum1+arr[n-1],sum2,arr,n-1)||subset(sum1,sum2+arr[n-1],arr,n-1);
}
int main() {
	//code
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int *arr=new int[n];
	    for(int j=0;j<n;j++)cin>>arr[j];
	    if(subset(0,0,arr,n))
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
