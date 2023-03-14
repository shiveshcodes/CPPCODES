#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int upper[26] = {0};
        int lower[26] = {0};
        for(int i=0;i<n;i++)
        {
            if(int(s[i])>96){
                upper[s[i]-'a']++;
            }
            else if(int(s[i]<91)){
                lower[s[i]-'A']++;
            }
        }

        int possible = 0;
        int available = 0;

        for(int i=0;i<26;i++)
        {
            available+= min(upper[i], lower[i]);
            possible+= abs(upper[i]-lower[i])/2;
        }

        int ans = available + min(possible, k);

        cout << ans << endl;
    }
}