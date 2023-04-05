//tutorialspoint.com/cplusplus-program-to-implement-insertion-sort

}void insertionSort(int *array, int size) {
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];//nhan gia tri
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;   //chen vao ben phai
}
