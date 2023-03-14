#include <bits/stdc++.h>

using namespace std;
//using namespace std::chrono;
int counter=0;



void permuteString(string c, string s)
{
    if(s.length()==0) cout << s;
    else if(s.length()==2){
        cout << "("+  to_string(++counter) +"): "+c + s << "\n";
        reverse(s.begin(),s.end());
        cout << "("+  to_string(++counter) +"): "+ c + s << "\n";
    }
    else
    {
        string temp;
        for(int i=0;i<s.length();i++)
        {   
            temp=s;
            permuteString(c+s[i],temp.erase(i,1));
        }
    }
    
}

void permuteString(string s)
{
    permuteString("",s);
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
//auto start = high_resolution_clock::now();

permuteString("ABCDEFGHIJ");

//auto stop = high_resolution_clock::now();
//cout << duration_cast<microseconds>(stop - start).count() << "microseconds" << endl;
return 0;
}