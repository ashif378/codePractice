#include <iostream>
#include <cstring>

using namespace std;
int k=0;

void tower(int, char[], char[], char[]);

int main()
{
    int n;

    cout << "Enter the number of disks to be transformed: ";
    cin >> n;

    if(n<1)
    {
        cout << "\nIncorrect value.";
        //exit();
        return 0;

    }
    else
    {
        cout << "The following moves required for N = " << n << endl << endl;
        tower(n, "A", "B", "C");
        cout << "\n\nTotal steps: " << k << endl << endl;
    }

}

void tower(int num, char A[5], char B[5], char C[5])
{
    if(num == 1)
    {
        cout << "Step " << k+1 << ":" << endl;
        cout << "Move disk " << num << " from tower " << A <<" to tower " << C << "\n";
        k++;
        return;
    }
    tower(num-1, A, C, B);
    cout << "Step: " << k+1 << ":" << endl;
    cout << "Move disk " << num << " from tower " << A <<" to tower " << C << "\n";
    k++;
    tower(num-1, B, A, C);
    return;
}
