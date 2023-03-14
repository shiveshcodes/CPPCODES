#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        bool ans = false;
        cin >> a >> b >> c;
        if(a>=b && a>=c)
            ans = (a == b+c);
        else if(b>=a && b>=c)
            ans = (b == a+c);
        else
            ans = (c == b+a);

        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}