/*
ID: mirajas1
TASK: ride
LANG: C++
*/

#include <bits/stdc++.h>


using namespace std;

int main()
{
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");


    string s1, s2;
    int i, j, a=0, sum1=1, sum2=1, m, n;

    fin >> s1 >> s2;

    m = s1.length();
    n = s2.length();

    for(i=0; i<m; i++)
    {
        sum1 *=  ( (int)s1[i]  - 64 );
    }

    for(i=0; i<n; i++)
    {
        sum2 *= ( (int)s2[i]  - 64 );
    }

    if(sum1 % 47 == sum2 % 47)
    {
        fout << "GO\n";
    }
    else
    {
        fout << "STAY\n";
    }

    return 0;
}
