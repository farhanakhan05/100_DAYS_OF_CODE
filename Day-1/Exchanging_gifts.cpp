#include <iostream>
#include <vector>
using namespace std;
void find_youngest_member(int n, int m) {
     vector<int>indegree(n+1,0);
     vector<int>outdegree(n+1,0);
     for (int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        outdegree[a]++;
        indegree[b]++;
     }
    {
        for(int i=1; i<=n; i++)
        {
            if(indegree[i]==n-1 && outdegree[i]==0)
            {cout<<i;
            return;}
        }
    
    cout<< -1;
    }
    
}

int main() {
    int n, m;
    cin >> n >> m;
    find_youngest_member(n, m);
    return 0;
}