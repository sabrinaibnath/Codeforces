#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    vector<int> d(n);

    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    sort(d.begin(), d.end());

    
    int max_gap = 0;
    for (int i = 1; i < n; i++) {
        max_gap = max(max_gap, d[i] - d[i-1]);
    }

    double b = d[0] - 0;
    double f = l - d[n-1];

 
    double r = max(max_gap / 2.0, max(b, f));

    
    cout << fixed << setprecision(10) << r << endl;

    return 0;
}
