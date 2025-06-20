#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    sort(d.begin(), d.end());

    int count = 0;
    if (d[0] != 0) {
        count++;
    }

    for (int i = 0; i < n - 1; i++) {  
        if (d[i] != d[i + 1]) {
            count++;
        }
    }

    cout << count << endl;
}
