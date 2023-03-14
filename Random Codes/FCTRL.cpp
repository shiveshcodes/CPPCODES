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
int i;
cin >> i;
i++;
while(i-->1)
{
    unsigned int n,sum=0;
    cin >> n;
    for(int m=5;(n/m)!=0;m*=5) sum+=n/m;
    cout << sum << "\n";
}

//auto stop = high_resolution_clock::now();
//cout << duration_cast<microseconds>(stop - start).count() << "microseconds" << endl;
return 0;
}