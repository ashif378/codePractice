#include <iostream>

using namespace std;

int main()
{
    int T, n;

    cin >> T;

    for(int i=0; i<T; i++)
    {
        cin >> n;

        if(n ==1)
        {
            cout << 0 << endl << 1 << endl;
        }
        else if(n == 2)
        {
            cout << "00" << endl << "01" << endl << "10" << endl << "11" << endl ;
        }
        else if(n == 3)
        {
            cout << "000" << endl << "001" << endl << "010" << endl << "011" << endl;
            cout << "100" << endl << "101" << endl << "110" << endl << "111" << endl ;
        }
    }

    return 0;
}
