#include <bits/stdc++.h>

using namespace std;

void open(int a)
{
    if(a == 1) cout << "(";
    else if(a == 2) cout << "((";
    else if(a == 3) cout << "(((";
    else if(a == 4) cout << "((((";
    else if(a == 5) cout << "(((((";
    else if(a == 6) cout << "((((((";
    else if(a == 7) cout << "(((((((";
    else if(a == 8) cout << "((((((((";
    else if(a == 9) cout << "(((((((((";
}
void close(int a)
{
    if(a < 0) a *= -1;
    if(a == 1) cout << ")";
    else if(a == 2) cout << "))";
    else if(a == 3) cout << ")))";
    else if(a == 4) cout << "))))";
    else if(a == 5) cout << ")))))";
    else if(a == 6) cout << "))))))";
    else if(a == 7) cout << ")))))))";
    else if(a == 8) cout << "))))))))";
    else if(a == 9) cout << ")))))))))";
}

int main()
{
    int t, len, m, tmp;
    cin >> t;
    string s1, s;

    for(int h=0; h<t; h++)
    {
        cin >> s1;
        len = s1.length();
        for(int i=0; i<len; i++)
        {
            if(s1[i] != '(' && s1[i] != ')')
            {
                s.append(1, s1[i]);
            }
        }
        cout << "Case #" << h+1 << ": ";
        m = s[0] - 48;
        open(m);
        cout << s[0];
        for(int i=1; i<len; i++)
        {
            tmp = s[i] - 48;
            if(tmp == 0)
            {
                close(m);
                cout << tmp;
                m = 0;
            }
            else if(s[i-1] < s[i])
            {
                open(tmp-m);
                cout << tmp;
                m = tmp;
            }
            else if(s[i-1] > s[i])
            {
                close(m-tmp);
                cout << tmp;
                m = tmp;
            }
            else
            {
                cout << tmp;
                m = tmp;
            }
        }
        close(m);
        cout << endl;
        s1.clear();
        s.clear();
    }
    return 0;
}
