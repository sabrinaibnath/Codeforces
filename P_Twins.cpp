#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>d(n);

    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    
    sort(d.rbegin(),d.rend());
    int m=d[0],count=1,sum=accumulate(d.begin(),d.end(),0);
    int mid=sum/2;
    for(int i=1;i<n;i++){
        if(m<=mid){
            count++;
            m+=d[i];
        }
    }

    cout<<count<<endl;
}