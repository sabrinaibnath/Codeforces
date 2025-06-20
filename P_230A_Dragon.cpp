#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s,n;
    cin>>s>>n;
    bool flag=false;
    
    vector<pair<long long, long long>> mp;

    for (long long i = 0; i < n; i++) {
        long long x, y;
        cin>>x>>y;
        mp.push_back({x,y});
    }

    sort(mp.begin(),mp.end());
    for(auto &i:mp){
        long long x, y;
        x=i.first;
        y=i.second;

         if(s>x){
            s=s+y;
            flag=true;
        }
        else{
            flag=false;
            break;
        }
    }
    
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}