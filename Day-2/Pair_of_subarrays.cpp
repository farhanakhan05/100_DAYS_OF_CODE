#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int calculate_pairs(int n, vector<int>& arr) {
     vector<long long> prefix(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + arr[i];
    }

    unordered_map<long long, vector<pair<int, int>>> mp;

    
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {

            long long sum = prefix[r + 1] - prefix[l];

            mp[sum].push_back({l, r});
        }
    }

    long long ans = 0;

    
    for (auto &it : mp) {

        vector<pair<int, int>> &v = it.second;

        int m = v.size();

        for (int i = 0; i < m; i++) {
            for (int j = i + 1; j < m; j++) {

                int l1 = v[i].first;
                int r1 = v[i].second;

                int l2 = v[j].first;
                int r2 = v[j].second;

                if (r1 < l2 || r2 < l1)
                    ans++;
            }
        }
    }

    return (int)ans;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = calculate_pairs(n, arr);
    cout << result << endl;
    return 0;
}