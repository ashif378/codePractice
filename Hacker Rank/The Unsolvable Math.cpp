#include <iostream>

using namespace std;

int main()
{
    int T, N, p;

    cin >> T;
    for(int i=0; i<T; i++)
    {
        cin >> p >> N;
        if(p == 1)
        {
            if(N%2 == 0)
            {
                cout << "Player-1 will have the ball after " << N << " rounds." << endl;
            }
            else
            {
                cout << "Player-2 will have the ball after " << N << " rounds." << endl;
            }
        }
        else if(p == 2)
        {
            if(N%2 == 0)
            {
                cout << "Player-2 will have the ball after " << N << " rounds." << endl;
            }
            else
            {
                cout << "Player-1 will have the ball after " << N << " rounds." << endl;
            }
        }
    }

    return 0;
}
