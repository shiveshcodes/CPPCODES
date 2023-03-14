#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        bool ans = true;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(v[i]==v[j])
                    {
                        ans = false;
                        break;
                    }
                }
            }             
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}