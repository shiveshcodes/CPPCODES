#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int randomN()
{
    int num = rand()%10;
    if(num<1 || num >6) return randomN();
    return num;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    auto start = high_resolution_clock::now();
    int n;
    cin >> n;
    for(int i=0;i<=n;i++)
    cout << randomN() << endl;
    auto stop = high_resolution_clock::now();

    cout << duration_cast<microseconds>(stop - start).count() << endl;
    
    return 0;   
}