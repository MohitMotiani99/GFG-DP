//https://www.geeksforgeeks.org/recursively-break-number-3-parts-get-maximum-sum/

#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int> q;
	int n;
	cin>>n;
	int max=INT_MIN;
	q.push(n);
	while(q.front()!=0){
		if(q.front()>max)
		max=q.front();
		
		int a=q.front()/2;
		int b=q.front()/3;
		int c=q.front()/4;
		
		q.push(a);
		q.push(b);
		q.push(c);
		q.push(a+b+c);
		q.pop();
	}
	cout<<max<<endl;
}
