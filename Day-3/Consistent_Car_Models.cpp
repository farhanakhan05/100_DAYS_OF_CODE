#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

int countConsistentCars(const string& components, int n, const vector<string>& models) {
    // User logic goes here
    unordered_set<char>allowed;
    for(char ch : components){
        allowed.insert(ch);
    }
    int count = 0;
    for(string model : models){
        bool valid= true;

        for(char ch : model){
            if(allowed.find(ch)==allowed.end()){
                valid=false;
                break;
            }
        }
        if(valid)
        count++;

    }
    return count;  // Placeholder return value
}

int main() {
    string components;
    int n;
    vector<string> models;

    getline(cin, components);
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; ++i) {
        string model;
        cin >> model;
        models.push_back(model);
    }

    int result = countConsistentCars(components, n, models);
    cout << result << endl;

    return 0;
}