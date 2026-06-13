#include <bits/stdc++.h>
using namespace std;

#define MAX 200002

long long int compareBits(string a, string b) {
     int m = a.size();
    int n = b.size();

    vector<int> pref(n + 1, 0);

    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + (b[i] == '1');
    }

    long long ans = 0;

    for (int i = 0; i < m; i++) {

        int L = i;
        int R = i + (n - m);

        int ones = pref[R + 1] - pref[L];
        int len = R - L + 1;
        int zeros = len - ones;

        if (a[i] == '0')
            ans += ones;
        else
            ans += zeros;
    }

    
    return ans;
    
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << compareBits(a, b);
    return 0;
}
    