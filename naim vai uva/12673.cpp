#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, g, a, b, goal[100000], point, cnt, e, f, x;


    while(scanf("%d %d", &n, &g) == 2)
    {
        point = 0;
        cnt = 0;
        x = 0;

        for(int i=0; i<n; i++)
        {
            cin >> a >> b;
            if(a > b)
            {
                point += 3;
            }
            else
            {
                e = a-b;
                goal[x] = e;
                x++;
            }
        }

        sort(goal, goal+x, greater<int>());

        for(int i=0; i<x; i++)
        {
            if(g>=0)
            {
                f = (goal[i]*-1) + 1;
                if(g>=f)
                {
                    g = g-f;
                    goal[i] = 0;
                    point += 3;
                }
                else
                {
                    f--;
                    if(g>=f)
                    {
                        goal[i]=0;
                        g = g-f;
                        point++;
                    }
                }
            }
            else
            {
                break;
            }
        }




        cout << point << endl;

    }


    return 0;
}
