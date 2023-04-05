//Đệ quy tương hỗ là loại đệ quy không gọi đệ quy trực tiếp chính nó, mà gọi một hàm khác. 
//Trong hàm khác lại gọi lại nó. Ví dụ chúng ta có hàm A() gọi đệ quy hàm B() và trong hàm B() gọi lại đệ quy hàm A().

bool isEven(int n);
bool isOdd(int n);
//Ham even goi ham Odd
bool isEven(int n){
  if(n == 0)
    return true;
  else
    return isOdd(n - 1);
}
//Nguoc lai ham Odd goi ham Even
bool isOdd(int n){
  return !isEven(n);
}
