#include <iostream>
using namespace std;
float TinhBT(float x, int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return x;
    return (1 + x/n) * TinhBT(x, n - 1) - (x/n) * TinhBT(x, n - 2);
}
int main()
{
    float x;
    int n;

    cout << "Moi nhap n: ";
    cin >> n;
    cout <<"Moi nhap x: ";
    cin >> x;

    float Tong = TinhBT(x,n);
    cout <<"Ket qua = " <<Tong<<endl;
    return 0;
}