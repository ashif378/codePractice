#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    freopen("tabs.in","r",stdin);
	int T, n, k, i;

	cin >> T;

	for(i=0; i<T; i++)
	{
		cin >> n >> k;
		if(k == 1 || k == n)
		{
			cout << '1' << endl;
		}
		else
		{
			cout << '2' << endl;
		}
	}

	fclose(stdin);
	return 0;
}
