// Q4 write a cpp program to print a square pattern of stars using nested loops.

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
