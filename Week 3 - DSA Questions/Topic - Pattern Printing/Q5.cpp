// Q4 write a cpp program using nested loops to print multiplication tables from 1 to 10 .

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Multiplication Table of " << i << endl;

        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }

        cout << endl;
    }

    return 0;
}

