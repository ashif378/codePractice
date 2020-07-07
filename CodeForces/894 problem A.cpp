#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char a[100];
	int s=0;
	
	cin >> a;
	
	int l = strlen(a);
	
	for(int i=0; i<l; i++)
	{
		if(a[i] == 'Q')
		{
			for(int j=i+1; j<l-i; j++)
			{
				if(a[j] == 'A')
				{
					for(int k=j+1; k<l-j; k++)
					{
						if(a[k] == 'Q')
						{
							s++;
						}
					}
				}
			}
		}	
	}
	
	cout << s;
	
	return 0;
}
