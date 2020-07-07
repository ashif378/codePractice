#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> mystack;

    mystack.push(50);
    mystack.push(40);
    mystack.push(30);
    mystack.push(20);
    mystack.push(10);

    while(!mystack.empty())
    {
        cout << "front: " << mystack.top() << endl;
        mystack.pop();
    }


    return 0;
}
