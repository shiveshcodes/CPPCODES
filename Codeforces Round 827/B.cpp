#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        bool ans = true;
        cin >> n;
        unordered_map<int,bool> m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            if(m.find(x)==m.end())
                m[x]=true;
            else 
            {
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}