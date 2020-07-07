#include <iostream>

using namespace std;

int main()
{
    int a, i, N, distance=0, displacement=0;
    char c;
    cin >> N;
    for(i=0; i<N;i++)
    {
        cin >> a >> c;
        distance += a;
        if(c == '+')
        {
            displacement += a;
        }
        else if(c == '-')
        {
            displacement -= a;
        }
    }

    cout << "DISTANCE: " << distance << endl;
    cout << "DISPLACEMENT: " << displacement << endl;
}
