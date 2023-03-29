#include <iostream>
using namespace std;

int dem(float a[],int n)
{
   if (n==0)
       return 0;
   if(a[n - 1] > 0)
        return 1 + dem(a, n - 1);
    return dem(a, n - 1);
}

void nhap(float a[],int n)
{
    for (int i=0; i<n; i++)
        {
            cout<<"Nhap a["<<i<<"]";
            cin >> a[i];
        }
}

int main() {
    int n;
    cout << "Moi nhap n: ";
    cin >>n;
    float a[1000];
    nhap(a,n);
    int demso = dem(a, n);
    cout<<"Co "<<demso<<"so duong";
    return 0;
}