#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
   cin>>t;

   long long n,x;

   for(int i=1;i<=t;i++){
    cin>>n>>x;
    vector<long long>d(n);

    
    for(int i=0;i<n;i++){
        cin>>d[i];
    }

    sort(d.begin(),d.end());

    long long count=0;
    long long sum=0;
    long long no=1;

    for(int i=n-1;i>=0;i--){
        sum+=d[i];
        if((sum/(no*1.0))>=x){
            count++;
            no++;
        }else{
            break;
        }
     }
      cout<<count<<"\n";
   } 
}