static void print(int n)
{
    if (n < 0)
        return;
    cout << " " << n;
  
    // ham thuc hien goi de quy o sau cung
    print(n - 1);
}
 
