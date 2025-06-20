#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        long long n,x;
        cin>>n>>x;


        long long d[n+1];
        
        long long count=0;
        long long win=0;
        for(long long i=1;i<=n;i++){
            cin>>d[i];
        }

       sort(d+1,d+n+1);

        for(long long i=n;i>=1;i--){
          count++;
          if(d[i]*count>=x){
            win++;
            count=0;
          }
    }
     cout<<win<<endl;
}
return 0;
}