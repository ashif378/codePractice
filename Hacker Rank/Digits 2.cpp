#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int T, len;
    char N[6];
    cin >> T;

    for(int i=0; i<T; i++)
    {
        cin >> N;
        len = strlen(N);
        cout << "Case " << i+1 << ':' << endl;
        if(len == 5)
        {
            cout << N[4] << " is the unit digit" << endl << N[3] << " is the tens digit" << endl << N[2] << " is the hundreds digit" << endl << N[1] << " is the thousands digit" << endl << N[0] << " is the ten-thousands digit" << endl;
        }

        else if(len == 4)
        {
            cout << N[3] << " is the unit digit" << endl << N[2] << " is the tens digit" << endl << N[1] << " is the hundreds digit" << endl << N[0] << " is the thousands digit" << endl;
        }

        else if(len == 3)
        {
            cout << N[2] << " is the unit digit" << endl << N[1] << " is the tens digit" << endl << N[0] << " is the hundreds digit" << endl;
        }

        else if(len == 2)
        {
            cout << N[1] << " is the unit digit" << endl << N[0] << " is the tens digit" << endl;
        }

        else if(len == 1)
        {
            cout << N[0] << " is the unit digit" << endl;
        }

    }

    return 0;
}
