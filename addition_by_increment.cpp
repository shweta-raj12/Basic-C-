// C++ Program to add two numbers using increment operator
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 11, b = 9;

    // If b is positive, increment a to b times
    for (int i = 0; i < b; i++)
        a++;

    // If b is negative, decrement a to |b| times
    for (int i = 0; i > b; i--)
        a--;

    cout << a;

    return 0;
}