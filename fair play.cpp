#include <iostream>

using namespace std;

int main()
{
    int a, b, t, si, hm, j=1;

    cin >> t;

    while(t--)
    {
        si = 0;
        hm = 0;

        for(int i=0; i<3; i++)
        {
            cin >> a >> b;
            if(a == 1)
            {
                si++;
            }
            else
            {
                hm++;
            }
        }
        if(si > hm)
        {
            cout << "Case " << j << ": " << "SI\n";
        }
        else
        {
            cout << "Case " << j << ": " << "HM\n";
        }
        j++;
    }


    return 0;
}
