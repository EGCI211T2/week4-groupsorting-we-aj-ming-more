#ifndef SORTING_H
#define SORTING_H
using namespace std;

#include <iomanip>
/* function prototype*/


void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        std::cout<<setw(3)<<a[i];

	std::cout<<std::endl;
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	cout <<"selection" <<endl;
     display(data,length);
     
	
} 



void insertion(int a[],int n){

cout << "insert" << endl;
display(a, n);
}

void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
cout << "bubble" << endl;
for(j=1;j<n;j++){

display(a,n);
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




