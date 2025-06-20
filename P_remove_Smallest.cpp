#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;

     for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>d(n);

        for(int i=0;i<n;i++){
            cin>>d[i];
        }

       sort(d.begin(),d.end());

       for(int i=n-1;i>0;i--){
        if(d[i]-d[i-1]<=1){
          d.erase(d.begin()+i);
        }
        else{
            cout<<"No"<<endl;
            break;
        }
       }
       if(d.size()==1){
        cout<<"Yes"<<endl;
       }        
     }   
}