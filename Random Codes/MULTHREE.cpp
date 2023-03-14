#include <bits/stdc++.h>

using namespace std;
//using namespace std::chrono;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
//auto start = high_resolution_clock::now();

int t;
cin >> t;
while(t--)
{
    long long k;
    int d1,d2;
    cin >> k >> d1 >> d2;  
    long long sum=d1+d2;
    int prev=sum%10;
    if(k==2 || ((prev*2)%10)==0)
    {
        sum= d1+d2 + prev ;
    }
    else{
    sum+=prev;
    k-=3;
    sum+=((k/4)*20);
    k=k%4;
    while(k--)
    {
        prev=((prev*2)%10);
        sum+=prev;
        
    }
    }
    if(sum %3==0) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

//auto stop = high_resolution_clock::now();
//cout << duration_cast<microseconds>(stop - start).count() << "microseconds" << endl;
return 0;
}