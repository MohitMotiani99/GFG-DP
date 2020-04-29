#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	for(i=0,j=n-1;i<n,i<j;){
		if(arr[j]-arr[i]>k){
			if(arr[j]-arr[i+1]<=k)
			{i++;break;			}
			
			else if(arr[j-1]-arr[i]<=k)
			{j--;break;			}
			
			i++;
			j--;
		}
		else
		break;
	}
	
	cout<<i+n-1-j<<endl;
}
