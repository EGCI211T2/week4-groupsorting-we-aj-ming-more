#include <iostream>
#include <cstring>

using namespace std;
#include "sorting.h"

int main(int argc, char**argv) {
  int N = argc-2; // N = the array length. Do N - 1 when using it as an index.
  int *a = new int[N];
  /* Make sure you convert 'a' properly*/ 
  for (int i = 2; i<argc; i++)
    {
      a[i-2] = atoi(argv[i]);
    }

   display(a,N);
 cout << argv[1] <<endl;
  if(argc>1){
       if      (strcmp(argv[1],"bubble")==0) bubbleSort(a,N); 
       else if (strcmp(argv[1],"selection")==0) selectionSort(a,N);
       else if (strcmp(argv[1],"insert")==0) insertion(a,N);
       else    {cout<<"Invalid Sorting Type."; return -1;}
      // selectionSort(a,N);
       display(a,N);
      }

 delete a;
 return 0;
}


