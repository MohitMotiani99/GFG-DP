#include<bits/stdc++.h>
using namespace std;
int path(int x,int y,int **arr,int n){
	if(n==0||n==1)
	return 0;
	if(x==n-1 && y==n-1)
	return 0;
	
	if((x+1<n && abs(arr[x][y]-arr[x+1][y])==1) && !(y+1<n && abs(arr[x][y]-arr[x][y+1])==1)){
	cout<<x<<y<<arr[x+1][y]<<" ";
	return 1+path(x+1,y,arr,n);}
	else if(!(x+1<n && abs(arr[x][y]-arr[x+1][y])==1) && (y+1<n && abs(arr[x][y]-arr[x][y+1])==1)){
	cout<<x<<y<<arr[x][y+1]<<" ";
	return 1+path(x,y+1,arr,n);}
	else if((x+1<n && abs(arr[x][y]-arr[x+1][y])==1) && (y+1<n && abs(arr[x][y]-arr[x][y+1])==1)){
	int a=path(x+1,y,arr,n);
	int b=path(x,y+1,arr,n);
	cout<<x<<y;
	if(a>b){
		cout<<arr[x+1][y]<<" ";
		return 1+a;
	}
	else{
		cout<<arr[x][y+1]<<" ";
		return 1+b;
	}
	}
	else{
	return 0;}
}

int main(){
	int n,i,j;
	cin>>n;
	int **arr=new int*[n];
	for(i=0;i<n;i++)arr[i]=new int[n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<arr[0][0]<<" ";
	int x=path(0,0,arr,n);
	cout<<endl<<endl;
	cout<<x<<endl;
}
/*
4
9 6 5 2
8 7 6 5
7 3 1 6
1 1 1 7
*/

