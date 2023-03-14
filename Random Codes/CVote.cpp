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

    int n, m;
    string country, chef;
    cin >> n >> m;
    map<string, string> cheftc;
    map<string, int> chefsc;
    map<string, int> countrysc;
    while (n-- > 0)
    {
        cin >> chef >> country;
        cheftc[chef] = country;
        chefsc[chef] = 0;
        countrysc[country] = 0;
    }
    auto it = cheftc.find(chef);
    while (m-- > 0)
    {
        cin >> chef;
        chefsc[chef]++;
        it = cheftc.find(chef);
        countrysc[it->second]++;
    }

    int bestchef = 0, bestcountry = 0;

    for (auto x = countrysc.begin(); x != countrysc.end(); x++)
    {
        if (x->second > bestcountry)
        {
            country = x->first;
            bestcountry = x->second;
        }
    }

    for (auto x = chefsc.begin(); x != chefsc.end(); x++)
    {
        if (x->second > bestchef)
        {
            chef = x->first;
            bestchef = x->second;
        }
    }

cout << country << "\n" << chef << "\n";

//auto stop = high_resolution_clock::now();
//cout << duration_cast<microseconds>(stop - start).count() << "microseconds" << endl;
return 0;
}