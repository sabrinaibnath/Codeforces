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
      int minDiff = INT_MAX;

        for (int i = 0; i < n - 1; i++) {
            minDiff = min(minDiff, abs(d[i] - d[i + 1]));
        }

        cout << minDiff << endl;
    }
}