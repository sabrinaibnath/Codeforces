#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
       long long n;
        cin>>n;
        vector<long long>d(n);
        vector<long long>temp(n);
        vector<long long>temp2(n);

        for(int i=0;i<n;i++){
            cin>>d[i];
        }
       temp2=d;
       sort(temp2.begin(),temp2.end());

        int maxp=temp2[n-1];
        int maxmin=temp2[n-2];

        for(int i=0;i<n;i++){
            if(d[i]==maxp){
                temp[i]=maxp-maxmin;
            }
            else{
                temp[i]=d[i]-maxp;
            }
        }

        for(int i=0;i<n;i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}