#include <bits/stdc++.h>

using namespace std;
//using namespace std::chron

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
//auto start = high_resolution_clock::now();

int t;
cin >>t;
while(t-->0)
{
    unsigned long long int N,A,B,K;
    cin >> N >> A >> B >> K;
    if((N/A+N/B-2*(N/(A*B/__gcd(A,B))))>=K) cout << "Win";
    else cout << "Lose";
    cout << "\n";
}

//auto stop = high_resolution_clock::now();
//cout << duration_cast<microseconds>(stop - start).count() << "microseconds" << endl;
return 0;
}