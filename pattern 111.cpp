#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    int n, i, j, k, z;
    list <char> li;
    list <char> li2;
    list <char> :: iterator it;

    for( ; ; )
    {
        cout << "Enter an odd number: ";
        cin >> n;

        if(n%2 == 0)
        {
        }
        else
        {
            for(i=0; i<n/2; i++)
            {

                for(j=0; j<n-1; j++)
                {
                    cout << " ";
                }

                if(i%2 == 0)
                {
                    li.push_front('x');
                    for(it = li.begin() ; it != li.end() ; ++it)
                    {
                        cout << *it ;
                    }

                    li2.push_back('x');
                    li2.push_back(' ');

                    cout << "\n";
                    for(j=0; j<n-1; j++)
                    {
                        cout << " ";
                    }

                    li.push_front(' ');
                    for(it = li.begin() ; it != li.end() ; ++it)
                    {
                        cout << *it ;
                    }

                }
                else
                {
                    li.push_front('o');
                    for(it = li.begin() ; it != li.end() ; ++it)
                    {
                        cout << *it ;
                    }

                    li2.push_back('o');
                    li2.push_back(' ');

                    cout << "\n";
                    for(j=0; j<n-1; j++)
                    {
                        cout << " ";
                    }

                    li.push_front(' ');
                    for(it = li.begin() ; it != li.end() ; ++it)
                    {
                        cout << *it ;
                    }
                }

                cout << "\n";
            }

            for(i=0; i<n; i++)
            {
                if(i%2 == 0)
                {
                    cout << "x ";
                }
                else
                {
                    cout << "o ";
                }
            }

            cout << endl;

            for(i=0; i<n/2; i++)
            {
                li2.push_front(' ');
                for(it = li2.begin() ; it != li2.end() ; ++it)
                {
                    cout << *it ;
                }
                cout << endl;

                li2.push_front(' ');
                for(it = li2.begin() ; it != li2.end() ; ++it)
                {
                    cout << *it ;
                }
                li2.pop_back();
                li2.pop_back();
                cout << endl;

            }
        }

        li.erase(li.begin(), li.end());
        li2.erase(li2.begin(), li2.end());

        cout << endl;

    }

    return 0;
}
