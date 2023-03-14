#include<bits/stdc++.h>
using namespace std;

// int gcd(int a, int b)
// {
//     if(b%a==0) return a;
//     return gcd(b%a, a);
// }


bool iscoprime(int a, int b)
{
    return __gcd(a,b)==1;
}

map<pair<int,int>, bool> mp;
int main()
{

    for(int i = 1; i <= 1000; i++)
    {
        for(int j = 1; j <= 1000; j++)
        {
            if(iscoprime(i, j))
            {
                mp[pair(i,j)] = true;
            }
        }
    }
    int t;
    cin >> t;

    while(t--)
    {
        int ans = -1;
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(mp.find(pair(a[i], a[j]))!=mp.end())
                {
                    ans = max(ans, i+j+2);
                }
            }
        } 
        cout << ans << endl;   
        
    }
}

