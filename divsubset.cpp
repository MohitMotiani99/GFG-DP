#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,j;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int *arr=new int[n];
	    for(j=0;j<n;j++)cin>>arr[j];
	    std::map<int, int> m;
	    for(j=0;j<n;j++){
	        m.insert({arr[j],0});
	    }
	    for(j=0;j<n;j++){
	        int key=arr[j];
	        for(int k=0;k<n;k++){
	            if(key%arr[k]==0 && arr[k]>m[key] && k!=j)
	                m[key]=arr[k];
	        }
	    }
	    
	    vector<int> out,temp;
	    map<int,int>::iterator it;
	    for(it=m.begin();it!=m.end();it++){
	    	cout<<it->first<<"    "<<it->second<<endl;
		}
		cout<<endl;
	    for(it=m.begin();it!=m.end();it++){
	        int key=it->first;
	        while(key!=0){
	        temp.push_back(key);
	        key=m[key];}
	        if(temp.size()>out.size()){
	            out.clear();
	            for(j=0;j<temp.size();j++)
	            out.push_back(temp[j]);
	        }
	        temp.clear();
	    }
	    for(j=0;j<out.size();j++){
	        cout<<out[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
