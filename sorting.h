#ifndef SORTING_H
#define SORTING_H
using namespace std;

#include <iomanip>
/* function prototype*/

void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        std::cout<<setw(4)<<a[i];

	std::cout<<std::endl;
  
}

void selectionSort(int *a, int length) 
{ 
  int i, j;
  int *p;
  for(j = 0; j < length-1; j++)
  {
    display(a,length);
      p = &a[j];
      for(i = j+1; i < length; i++)
      {
          if(*p > a[i])
          {
              p = &a[i];
          }
      }
  swap(a[j], *p);
  }
     
} 


void insertionSort(int a[], int n) {
    int i, j, value;
    for (i = 1; i < n; i++) {
        value = a[i];
        for (j = i - 1; j >= 0 && a[j] > value; j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = value;
        display(a, n); // Showing progress
    }
}


void bubbleSort(int *a, int N) {
    int i, j;
    // Outer loop: Tells the program how many passes to make
    for (j = 0; j < N - 1; j++) {
        display(a,N);
        // Inner loop: Does the actual swapping for one pass
        for (i = 0; i < N - 1; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
            }
        }
    }
}

// Quicksort Algorithm, 6880815 CJ. 
int partition(int a[],int first,int last) // first can be omitted and 0 used in its place,
{                                   
// Chooses the last element as the pivot value for the array
int pivot=a[last]; 
 //chooses the element prior to the first element in the array
 int i = first-1; 


 for (int j = first; j <= last - 1; j++)  //This loop checks if a[j] is less than the pivot value,
 {                                        // incrementing i, then swapping the value. If greater, j increments, no swap happens.
  if (a[j]<pivot){i++; swap(a[i], a[j]);}
 }

 swap(a[i+1], a[last]); //swapping the final element with the element after i.
 return i + 1;
}

// the quicksort function calls partition() recursively, splitting the elements partitioned until it is sorted.
void quicksort(int a[],int first,int last)
{
  if (first < last)
  {
    int pi = partition(a, first, last);

    quicksort(a, first, pi-1); // These split the previously partitioned array into two halves, sorted, then split again, recursively.
    quicksort(a, pi+1, last);
  }

}




#endif