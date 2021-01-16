#include<bits/stdc++.h>
using namespace std;
int helper(string a,string b,int ast,int bst){
    if(ast>=a.size())
    return 0;
    
    if(a[ast]==b[b.size()-1])
    {
    cout<<a[ast]<<endl;
    return 1;
    }
    
    int sum=0;
    
    for(int i=ast;i<a.size();i++){
    if(a[i]==b[bst])
    sum+= helper(a,b,i+1,bst+1);
    else
    sum+= helper(a,b,i+1,bst);
    }
    return sum;
}
int main(){
    string a,b;
    cin>>a>>b;
    
    cout<<helper(a,b,0,0);
}
