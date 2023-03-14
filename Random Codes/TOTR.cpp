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
string m,l,temp;
cin >> t >> m;
while(t-->0)
{
    cin >> l;
    temp="";
    for(int i=0;i<l.length();i++)
    {
        if(isalpha(l[i]))
        {
            char c;
            if(islower(l[i])) 
            {
                c=(m[tolower(l[i])-97]);
            }
            else 
            {
                c=(toupper(m[tolower(l[i])-97]));
            }
            string s(1,c);
            temp+=s;
        }
        else if(l[i]=='_'){
            temp+=" ";
        }
        else
        {
            string s(1,l[i]);
            temp+=s;
        }

    }
    cout << temp << "\n";
}

//auto stop = high_resolution_clock::now();
//cout << duration_cast<microseconds>(stop - start).count() << "microseconds" << endl;
return 0;
}