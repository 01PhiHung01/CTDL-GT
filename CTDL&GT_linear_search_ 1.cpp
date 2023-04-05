//Freetutes.net
#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x){
        //Lặp từng phần tử của mảng và kiểm tra.
    for(int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
        // Trả về -1 nếu đã duyệt hết mà ko tìm thấy.
    return -1;
