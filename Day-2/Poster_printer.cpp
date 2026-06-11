#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
     int T;
     cin>>T;
     while(T--)
     {
        int N;
        cin>>N;

        string s;
        cin>>s;

        bool possible = true;

        int i=0;
        while(i<N)
        {
            if(s[i] == 'W'){
            i++;
            continue;
            }
            int b=0, r=0;
            while(i < N && s[i] != 'W')
            {
                if(s[i] =='B')
                b++;

                else
                r++;

                i++;
            }

            if(r==0||b==0)
            {
                possible=false;
                break;
            }
        }
        cout<<(possible?"YES":"NO")<<"\n";
     }
     
       
    return 0;
}