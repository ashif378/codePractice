#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <int> myQ;

    myQ.push(50);
    myQ.push(40);
    myQ.push(30);
    myQ.push(20);
    myQ.push(10);

    cout << "front:  " << myQ.front() << endl;
    cout << "back:  " << myQ.back() << endl;
    cout << "Size: " << myQ.size() << endl;

    while(!myQ.empty())
    {
        myQ.pop();
    cout << "front:  " << myQ.front() << endl;
    cout << "back:  " << myQ.back() << endl;
    cout << "Size: " << myQ.size() << endl;

    }

    return 0;
}


