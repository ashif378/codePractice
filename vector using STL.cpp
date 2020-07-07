#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec;
    vector <int> :: iterator i;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    for(i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i << "\t";
    }
    cout << endl;

    return 0;
}
