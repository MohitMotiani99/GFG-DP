#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,sum,max;
	cin>>n;
	int *arr=new int[n];
	for(i=0;i<n;i++)cin>>arr[i];
	
	int maxl=0,l=0;
	
	int s=0,e=0;
	for(i=0;i<n;i++){
		if(arr[i]>0)break;
	}
	max=sum=arr[i];
	maxl=l=1;
	e=i+1;
	while(e<n){
		if(arr[e]+sum>0)
		{sum=sum+arr[e];e++;l++;
			if(max<sum){
			max=sum;
			maxl=l;
			}
		}
		else{
			if(max<sum)
			{max=sum;
			maxl=l;
			}
			sum=0;
			l=0;
			e=e+1;
			s=e;
		}	
	}
	cout<<max<<"    "<<maxl<<endl;
}
