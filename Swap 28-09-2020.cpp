// Swap 28-09-2020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int m = 24;
int n = 36;
int temp;

int SwappedNumbers(int a, int b);


int main()
{
    while (m > 0)
    {
        if (n > m)
        {
            cout << "m is currently " << m << endl;
            cout << "n is currently " << n << endl;
            cout << "Commencing the magic..." << endl;
            SwappedNumbers(m, n);
            m -= n;
            cout << "m is now " << m << endl;
            cout << "n is now " << n << endl;
        }
        else
        {
            m -= n;
        }
    }
    cout << "So the answer is " << n << endl;
    return 0;
}

int SwappedNumbers(int a, int b)
{
    temp = n;
    n = m;
    m = temp;
    return m, n;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
