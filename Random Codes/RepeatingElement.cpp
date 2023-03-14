#include<iostream>
#include<climits>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max=INT_MIN;
    int element[n];

    for(int i=0;i<n;i++)
    {
        cin >> element[i];
        max=element[i]>max?element[i]:max;
    }

    int occ[max];

    for(int i=0;i<n;i++)
    {
        ++occ[element[i]];
    }

    int i;
    for(i=0;i<n;i++)
    {
        if(occ[element[i]]>=2) break;
    }
    cout<<i+1<<endl;

}