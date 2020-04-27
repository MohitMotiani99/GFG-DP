#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<=0)
	cout<<endl;
	else{
		int count =0;
		cout<<"0"<<" ";
		count++;
		queue<int> q;
		q.push(1);
		while(count<n){
			cout<<q.front()<<" ";
			count++;
			q.push(4*q.front());
			q.push(4*q.front()+1);
			q.pop();
		}
	}
}
