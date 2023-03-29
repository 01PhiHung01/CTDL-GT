#include <iostream>
using namespace std;
long TinhXn(int n)
{
    if(n == 0)
        return 1;
    long Tong = 0;
    for(int i = 1; i <= n; i++)
    {
        Tong = Tong + i * i * TinhXn(n - i);
    }
    return Tong;
}
int main()
{
    int n;
    cout <<"Moi nhap n: ";
    cin >> n;
    long Tong = TinhXn(n);
    cout <<"So hang cua day la: " << Tong;
    return 0;
}