#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, k, day1, day2, month1, month2, year1, year2, fine=0;
    cin >> day1 >> month1 >> year1;
    cin >> day2 >> month2 >> year2;

    if(year1 < year2)
    {
        cout << 0;
    }
    else if(year1 == year2)
    {
        if(month1 == month2)
        {
            if(day1 <= day2)
            {
                cout << 0;
            }
            else
            {
                fine = 15*(day1 - day2);
                cout << fine;
            }

        }
        else if(month1 < month2)
        {
            cout << 0;
        }
        else
        {
            fine = 500 * (month1 - month2);
            cout << fine;
        }
    }
    else
    {
        cout << "10000";
    }

    return 0;
}
