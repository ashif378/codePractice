#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int N, a, i, d1=0, d2=0;
    char ch;

    cin >> N;

    for(i=0; i<N; i++){
        cin >> a >> ch;
        d1 += a;
        if(ch == '+'){
            d2 = d2 + a;
        }
        else if(ch == '-'){
            d2 = d2 - a;
        }
    }
    d2 = abs(d2);

    cout << "DISTANCE: " << d1 << endl << "DISPLACEMENT: " << d2;


    return 0;

}
