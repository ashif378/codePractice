#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

//from now on, we can use PII
//in the place of pair<....
//we will put weight at the first place
//and price at the second place

typedef pair<int, int> PII;

vector<PII> V;

bool cmp(PII A, PII B)
{
    //we want to order on decreasing order of
    //price/weight
    //so: return A.price / A.weight > B.price / B.weight
    //But it is better if we can avoid division
    //because of possible precision loss.
    //so we can rewrite it as:
    //return A.price * B.weight > B.price * A.weight
    //we use first for weight, and second for price.

    return A.second * B.first > A.first * B.second;
}

void fractional_knapsack()
{
    int n, w;
    cin >> n >> w;
    for(int i=0; i<n; i++)
    {
        int weight, price;
        cin >> weight >> price;
        V.push_back(PII(weight, price));
    }

    sort(V.begin(), V.end(), cmp);

    int ans = 0;

    for(int i=0; i<n; i++)
    {
        //w is remaining capacity
        //V[i].first is weight of the i'th element.
        //so steal minimum of them.

        int z = min(w, V[i].first);
        w -= z;

        ans += z * V[i].second;
    }

    cout << "\nMaximum cost: " << ans << endl;

}

int main()
{
    fractional_knapsack();

    return 0;
}
