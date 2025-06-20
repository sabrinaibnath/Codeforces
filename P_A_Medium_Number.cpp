#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    for(long long i=1;i<=t;i++){
        int d[3];
        for(int i=0;i<3;i++){
            cin>>d[i];
        }

        sort(d,d+3);

        cout<<d[1]<<endl;

    }

    return 0;
}