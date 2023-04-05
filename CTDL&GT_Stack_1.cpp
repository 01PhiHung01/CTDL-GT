//Kiem tra Stack day
bool IsFull(int capacity){
    if(top >= capacity - 1){
        return true;
    }else{
        return false;
    }
}

//Kiem tra Stack rong
bool IsEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}
//Them phan tu vao dinh Stack
void Push(int stack[], int value, int capacity){
    if(IsFull(capacity) == true){
        cout <<"nStack is full. Overflow condition!";
    }else{
        ++top;
        stack[top] = value;
    }
}
//Xoa phan tu khoi dinh Stack
void Pop(){
    if(IsEmpty() == true){
        printf("\nStack is empty. Underflow condition!");
    }else{
        --top;
    }
}
//Lay gia tri o dinh phan tu Stack
int Top(int stack[]){
    return stack[top];
}
//Lay so luong phan tu Sack dang co
int Size(){
    return top + 1;
}
