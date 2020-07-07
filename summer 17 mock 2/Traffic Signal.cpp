#include <iostream>

using namespace std;

int main()
{
    int T, A, B, C, D, i;

    cin >> T;
    for(i=0; i<T; i++){
        cin >> A >> B >> C >> D;

    if(C == 1 || D == 1){
        cout << "E-W Green" << endl;
    }
    else cout << "N-S Green" << endl;

    }

    return 0;
}
