#include <iostream>
using namespace std;

int TinhTongChan(int arr[], int n) {
    if (n == 0) { 
        return 0;
    } else {
        int sum = TinhTongChan(arr, n-1); 
        if (arr[n-1] % 2 == 0) {
            sum += arr[n-1];
        }
        return sum;
    }
}
void nhap(int arr[], int n) {
    for (int i=0; i<n ; i++) {
        cout <<"Nhap phan tu a[" <<i<<"] : ";
        cin >> arr[i];
    }
}
int main() {
    int arr[1000];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    nhap(arr,n);
    cout << "Tong cac so chan la: " << TinhTongChan(arr,n) <<endl;
    return 0;
}
