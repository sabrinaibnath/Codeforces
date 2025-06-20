#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d[3];
    for(int i=0;i<3;i++){
        cin>>d[i];
    }

    sort(d,d+3);

    int s=0;
    s+=d[1]-d[0];
    s+=d[2]-d[1];

    cout<<s<<endl;

}