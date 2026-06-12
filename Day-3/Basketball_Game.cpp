#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Placeholder for user logic function
int user_logic(vector<string>& ops) {
    vector<int>record;
    for(string op: ops)
    {
        if(op == "C"){
            record.pop_back();
        }
        else if(op == "D"){
            record.push_back(2*record.back());
        }
        else if(op == "+"){
            int m = record.size();
            record.push_back(record[m-1] + record[m-2]);
        }
        else{
            record.push_back(stoi(op));
        }
    }
    int sum = 0;
    for(int x : record){
        sum += x;
    }
    return sum; 
}

int main() {
    int n;
    cin >> n; // Input for number of operations
    vector<string> ops(n);
    
    // Input vector of operations
    for (int i = 0; i < n; ++i) {
        cin >> ops[i];
    }
    
    // Call user logic function and print the output
    int result = user_logic(ops);
    cout << result << endl;
    
    return 0;
}