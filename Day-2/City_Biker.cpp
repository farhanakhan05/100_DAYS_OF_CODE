#include <iostream>
#include <vector>
using namespace std;

// User logic function
int highestAltitude(int n, const vector<int>& gain) {
    int altitude = 0;
    int highestAltitude = 0;
    for(int i=0; i<n; i++)
      {
        altitude += gain[i];
        highestAltitude = max(highestAltitude, altitude);
      }
    return highestAltitude; // Placeholder return
}

int main() {
    int n;
    cin >> n;
    vector<int> gain(n);
    for (int i = 0; i < n; ++i) {
        cin >> gain[i];
    }
       cout<< highestAltitude(n, gain);
    return 0;
}