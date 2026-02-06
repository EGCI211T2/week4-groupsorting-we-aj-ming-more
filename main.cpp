#include <iostream>
#include <cstring>

using namespace std;
#include "sorting.h"

int main(int argc, char**argv) {
  int N = argc-2; // N = the array length. Do N - 1 when using it as an index.
  string type = argv[1]; // type = sorting type
  int *a = new int[N];
  /* Make sure you convert 'a' properly*/ // i conv
  for (int i = 2; i<argc; i++)
    {
      a[i-2] = atoi(argv[i]);
    }

   display(a,N);
 cout << type <<endl;
 cout << type <<endl;
  if(argc>1){
       if      (type=="quick")     quicksort(a, 0, N-1); //check sorting.h for explanation! - Cj. I used the GeeksforGeeks quicksort algorithm.
       else if (type=="selection") selectionSort(a,N);
       else if (type=="insert")    insertionSort(a,N);
       else if (type=="bubble")    bubbleSort(a,N);
       else    {cout<<"Invalid Sorting Type."; return -1;}
       //selectionSort(a,N);
       display(a,N);
      }

 delete[] a;
 return 0;
}