#include <iostream>

using namespace std;

int main()
{
    int T;
    long N;

    cin >> T;

    for(int i=0; i<T; i++){
        cin >> N;
        if(N == 0){
            cout << "ZERO" << endl;
        }
        else if(N > 0){
            cout << "POSITIVE" << endl;
        }
        else if(N < 0){
            cout << "NEGATIVE" << endl;
        }
    }

    return 0;
}
