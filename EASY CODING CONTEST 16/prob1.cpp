#include <iostream>

using namespace std;

int main()
{
    char ch[2];
    int i, T;

    cin >> T;

    for(i=0; i<T; i++)
    {
        cin >> ch;

        if(ch[0] == 'a' || ch[0] == 'A')
        {
            cout << "Accepted" << endl;
        }
        else if(ch[0] == 'w' || ch[0] == 'W')
        {
            cout << "Wrong Answer" << endl;
        }
        else if(ch[0] == 'r' || ch[0] == 'R')
        {
            cout << "Run Time Error" << endl;
        }
        else if(ch[0] == 'T' || ch[0] == 't')
        {
            cout << "Time Limit Exceeded" << endl;
        }
    }

    return 0;
}
