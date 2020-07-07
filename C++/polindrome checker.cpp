#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("palindrome.txt", "r", stdin);
    char s[100];
    int len;

    cin >> s;

    len = strlen(s);
    int j = len-1;
    int k = len/2;

    int p = 0;

    for(int i=0; i<k; i++, j--)
    {
        if(s[i] == s[j])
        {
            p++;
        }
    }

    if(p == k)
    {
        cout << "\nThis is palindrome" << endl;
    }
    else
    {
        cout << "\nThis is not palindrome" << endl;
    }

    //fclose(stdin);
    return 0;
}
