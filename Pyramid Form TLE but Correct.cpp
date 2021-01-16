if(N==1)
        return a[0]-1;
        /*int k;
        /*if(N%2==0)
        k=N-1;
        else
        k=N;
        
        int ans=INT_MAX;
    for(k=1;k<=N;k+=2){
        for(int i=0;i<=N-k;i++){
            //cout<<i<<"  ";
            int sum=0;
            int c=1;
            int j;
            for(j=0;j<i;j++)
            sum+=(a[j]);
            for(;j<i+k/2+1;j++){
                if(a[j]<c)
                {sum=INT_MAX;break;}
                else{
                sum+=(a[j]-c);
                c++;
                }
            }
            //cout<<sum<<"  "<<j<<"  "<<c<<"  ";
            c-=2;
            if(sum!=INT_MAX){
            for(;j<=k;j++){
                if(a[j]<c)
                {sum=INT_MAX;break;}
                else{
                sum+=(a[j]-c);
                c--;
                }
            }
            //cout<<sum<<"  ";
            for(;j<N;j++)
            sum+=(a[j]);
            
            //cout<<sum<<endl;
            }
            ans=min(ans,sum);
        }
      }
        return ans;
