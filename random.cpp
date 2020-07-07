#include <iostream>

using namespace std;

int main()
{
    int a[8] = {1,3,5,7,9,11,13,15}, n=0;

    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            for(int k=0; k<8; k++)
            {
                if(a[i]+a[j]+a[k] == 29)
                {
                    cout << a[i] << " + " << a[j] << " + " << a[k] << endl;

                }
            }

        }

    }

    if(n == 0)
    {
        cout << "Not Found\n";
    }

    return 0;
}
