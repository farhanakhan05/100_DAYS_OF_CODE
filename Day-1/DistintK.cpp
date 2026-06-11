#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    int N;
    cin>>N;

    vector <string> arr(N);
    unordered_map<string,int> freq;

    for(int i=0; i<N; i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    int k;
    cin>>k;
    int cnt= 0;
    for(int i=0; i<N; i++){
      if(freq[arr[i]]==1){
        cnt++;

        if(cnt==k){
            cout<<arr[i];
            return 0;
        }
      }
    }
     cout<<-1;
   
    return 0;
}