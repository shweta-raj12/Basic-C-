// C++ program to swap two numbers using swap() function

#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    int a = 5, b = 10;

    cout << "Before swapping a = " << a << " , b = " << b
         << endl;

    // Built-in swap function
    swap(a, b);

    cout << "After swapping a = " << a << " , b = " << b
         << endl;
    return 0;
}