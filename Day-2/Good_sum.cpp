#include <iostream>
#include <vector>
using namespace std;
int good_sum(int N, vector<int> &arr) {
     vector<int>st;
     for(int x : arr){
       if(x>=0){
       st.push_back(x);
     }
      else{
      int need = abs(x);
      int removedsum = 0;

      while(!st.empty() && removedsum < need){
      removedsum += st.back();
      st.pop_back();
      }
      st.push_back(need);
      }
     }

     int ans = 0;
     for(int x: st)
     ans += x;
    return ans;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    
    // Call user logic function and print the output
    int result = good_sum(N, arr);
    cout << result << endl;
    return 0;
}