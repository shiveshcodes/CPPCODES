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

    int n,temp;
    cin >> n;
    vector<int> arr;
    while(n--)
    {
        cin >> temp;
        auto it = upper_bound(arr.begin(),arr.end(),temp);
        if(it==arr.end()) arr.push_back(temp);
        else arr[it-arr.begin()]=temp;
    }

    cout << arr.size() << " ";

    for(auto x:arr) cout << x << " ";

    cout << "\n";
}

//auto stop = high_resolution_clock::now();
//cout << duration_cast<microseconds>(stop - start).count() << "microseconds" << endl;
return 0;
}