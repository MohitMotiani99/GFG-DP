#include<bits/stdc++.h>
using namespace std;
long minp(int **arr,int x,int y,int n){
	if(x==n-1)
	return arr[x][y];
	
	return arr[x][y]+max(minp(arr,x+1,y,n),minp(arr,x+1,y+1,n));
}
int main(){
	int n;
	cin>>n;
	int i,j;
	int **arr=new int*[n];
	for(i=0;i<n;i++)arr[i]=new int[n];
	for(i=0;i<n;i++){
		for(j=0;j<i+1;j++)
		cin>>arr[i][j];
	}
	cout<<minp(arr,0,0,n)<<endl;
}
