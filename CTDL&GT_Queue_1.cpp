//Khoi tao Queue
Void int (Queue &Q) // Hàm khởi tạo
Queue rong
{
	Q.Front = 0;  // Phần tử đầu
Q.Rear = -1;   // Phần tử cuối o -1 ( không có phần tử trong Q)
Q.count = 0; // Số phần tử bằng 0
} 
//Kiem tra Queue rong
Int Isempty (Queue Q) // Hàm kiểm tra
Queue rong
{
	If (Q.count == 0) // Số phần tử = 0 → rỗng
	     return 1;
	return 0;
}	
//Kiem tra Queue day
Int Isfull (Queue Q) // Hàm kiểm tra Queue đầy
{
	If (Q.count == Max) // Số phần tử bằng Max → Đầy
	      return 1;
	return 0;
}
//Them phan tu vao cuoi Queue
void Push(Queue &Q, item x) // Hàm thêm phần tử vào cuối Queue
{
    if (Isfull(Q)) printf("Hàng đợi đầy !");
    else
    { 
        Q.Data[++Q.Rear] = x; // Tăng Rear lên và gán phần tử vào
        Q.count++; // Tăng số phần tử lên
    }
}
//Xoa phan tu dau Queue
int Pop(Queue &Q) // Hàm loại bỏ phần tử khỏi đầu hàng đợi
{
    if (Isempty(Q))
    	cout<<"Hàng đợi rỗng: \n";
    else
    {
		item x = Q.Data[Q.Front];
  or (int i=Q.Front; i<Q.Rear; i++) // Di chuyển các phần tử về đầu hàng
Q.Data[i] = Q.Data[i+1];
        Q.Rear--; // Giảm vị trí phần tử cuối xuống
        Q.count--; // Giảm số phần tử xuống
        return x; // Trả về phần tử lấy ra
    }
}
//Xem thong tin phan tu dau Queue
item Qfront (Queue Q) // Xem thông tin phần tử đầu hàng
{
    if (Isempty(Q)) 
    cout<<“Hàng đợi rỗng:\n”;
    else
    return Q.Data[Q.Front];
}
