#ifndef SORTING_H
#define SORTING_H

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
        std::cout<<setw(3)<<a[i];

	std::cout<<std::endl;
  
}

void selectionSort(int *a, int length) 
{ 
  int i, j;
  int *p;
  for(j = 0; j < length-1; j++)
  {
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


void insertion(int a[],int n){


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
for(j=1;j<n;j++){


	
  display(a,n);
 }
  
}
#endif




