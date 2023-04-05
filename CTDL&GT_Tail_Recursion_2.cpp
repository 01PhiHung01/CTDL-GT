//geeksforgeeks.com
#include <iostream>
using namespace std;
 
// Ham de quy duoi ve tinh giai thua
unsigned factTR(unsigned int n, unsigned int a)
{
    if (n <= 1)
        return a;
 
    return factTR(n - 1, n * a);
}
 
// A wrapper over factTR
unsigned int fact(unsigned int n) { return factTR(n, 1); }
 
int main()
{
    cout << fact(5);
    return 0;
}
