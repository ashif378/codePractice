#include <iostream>
using namespace std;

int main()
{
    int n, k, a[100], i, j, m=0;
    cin >> n >> k;
    for(i=0 ; i<n ; i++){
        cin >> a[i];
    }

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if((a[i]+a[j]) % k == 0){
            m++;
            }
        }
    }

    cout << m;

    return 0;
}
