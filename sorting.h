#ifndef SORTING_H
#define SORTING_H

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
#endif




