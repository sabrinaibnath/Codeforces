#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;

   int n,k;

   for(int i=1;i<=t;i++){
    cout<<"enter the n: ";
    cin>>n;
    cout<<"enter the k: ";
    cin>>k;
    vector<int>d(n);
    cout<<"enter the values: ";
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    if(n==1){
        cout<<0<<"\n";
    }
    sort(d.begin(),d.end());
    cout<<accumulate(d.begin()+n-1-k,d.end(),0LL)<<endl;;
   } 
}