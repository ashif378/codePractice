#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int amount, coin_number, *coin, i, j, k, *combination;

    cin >> amount >> coin_number;

    coin = new long int [coin_number];
    combination = new long int [amount+1];

    for(i=0; i<amount+1; i++)
    {
        combination[i] = 0;
    }

    combination[0] = 1;


    for(i=0; i<coin_number; i++)
    {
        cin >> coin[i];
    }

    for(j=0; j<coin_number; j++)
    {
        for(i=0; i<amount+1 ; i++)
        {
            if(i >= coin[j])
            {
                combination[i] += combination[i - coin[j]] ;
            }
        }
    }

    cout << combination[amount];

    return 0;
}
