// C++ program to add two numbers by using Bitwise operator or Half Adder Method

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 11, b = 9, carry;

    while (b) {

        // Carry is AND of a and b
        carry = a & b;

        // Sum without carry is XOR of a and b
        a = a ^ b;

        // Carry is shifted by one so that it can be added in the next iteration
        b = carry << 1;
    }

    cout << a;
    return 0;
}
