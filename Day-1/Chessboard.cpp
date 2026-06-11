#include <iostream>
#include <string>
using namespace std;
string determineColor(const string& s) {
    int column = s[0]-'a'+ 1;
    int row = s[1]-'0';
    if ((column+row)%2==0)
    cout<<"Black";
    else
    cout<<"White";
    return "";
}

int main() {
    string s;
    cin >> s;
    string result = determineColor(s);
    cout << result << endl;
    return 0;
}