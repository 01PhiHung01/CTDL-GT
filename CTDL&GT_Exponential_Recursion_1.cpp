Hàm đệ quy đa tuyến (Exponential Recursion) là một hàm mà khi chúng ta gọi đệ quy, nó sẽ phát sinh ra thêm n lần đệ quy khác. 
Hiểu đơn giản hơn thì một hàm có n lần đệ quy trong thân hàm gọi là hàm đệ quy đa tuyến.
void daTuyen(int i, int n, int *X)
{
    int val;    
    for (val = 0; val < 2; val++)
    {
        X[i] = val;
        if (i == (n-1))      
        {
            int j;
            for(j = 0; j < n; j ++)     
            {
                cout<< X[j];
            }
            cout<<"\n";
        }
        else          
        {
            daTuyen(i+1, n, X); 
        }
    }
}
