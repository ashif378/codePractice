#include <iostream>

using namespace std;

unsigned long long int minn(unsigned long long int a,unsigned  long long int b,unsigned  long long int c)
{
    if(a>b && b<c){
        return b;
    }
    else if(b>a && c>a){
        return a;
    }
    else
        return c;
}

unsigned long long int maxx(unsigned long long int a,unsigned  long long int b, unsigned long long int c)
{
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else
        return c;
}

unsigned long long int mid(unsigned long long int a,unsigned  long long int b, unsigned long long int c)
{
    if(a > b && a  <c){
        return a;
    }
    else if (b > a && b < c){
        return b;
    }
    else {
        return c;
    }
}



int main ()
{
    int T, i, s;
    unsigned long long int X, Y, Z, l, k, m, j;

    cin >> T;

    for(i=0; i<T; i++){
            s =0;
        cin >> X >> Y >> Z;
        m = minn(X, Y, Z);
        l = mid(X, Y, Z);
        k = maxx(X, Y, Z);

        if(l*2 <= k){
            s = s+l;
            k = k - l;
        }
        else{
            for(j=l-1; j>0; j--){
                if(j*2 <= k){
                    s = s+j;
                    k = k-j;
                }
                break;
            }
        }


        if(m*2 <= k){
            s = s+m;
        }
        else{
            for(j=m-1; j>0; j--){
                if(j*2 <= l){
                    s = s+j;
                }
                break;
            }
        }

        cout << s << endl;

    }


}
