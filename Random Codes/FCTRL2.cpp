#include <bits/stdc++.h>

using namespace std;
//using namespace std::chrono;
string fact(int n)
{
    if(n==0 || n==1) return "1";
    int arr[160];
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
//auto start = high_resolution_clock::now();
/*
        0 0 0 0 0 1 2 0 3 
                        4
*/
int t,n;
map <int,int > list;
string arr[t];
cin >> t;
int i=0;
while(t-->0)
{
    cin >> n;
    list[n] = i++;
}
int arr[160];
arr[159]=1;
if(list.find(0)!=list.end()) arr[list.find(0)->second] ="1";
if(list.find(1)!=list.end()) arr[list.find(1)->second] ="1";
while(list)

//auto stop = high_resolution_clock::now();
//cout << duration_cast<microseconds>(stop - start).count() << "microseconds" << endl;
return 0;
}