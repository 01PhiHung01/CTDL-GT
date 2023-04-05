//Hàm đệ quy nhị phân là hàm gọi lại chính nó hai lần trong thân hàm. Nghĩa là một hàm có hai câu lệnh gọi lại chính nó trong thân hàm gọi là hàm đệ quy nhị phân.
int fib(int n){
if(n <= 2) return 1; // điểm dừng
return fib(n - 1) + fib(n - 2);
}
