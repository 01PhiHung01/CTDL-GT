#include <iostream>
using namespace std;

long TinhXn(int);
long TinhYn(int);
long TinhXn(int n)
{
    if (n==0)
        return 1;
    return TinhXn(n-1) + TinhYn(n-1);
}
long TinhYn(int n)
{
    if (n==0)
        return 0;
    return 3*TinhXn(n-1) + 2*TinhYn(n-1);
}
int main ()
{
    int n;
    cout << " Moi nhap n: ";
    cin >> n;
    long Ketqua1 = TinhXn(n);
    long Ketqua2 = TinhYn(n);
    cout << "X(n): " << Ketqua1;
    cout << "\nY(n): " << Ketqua2;
    return 0;
}
