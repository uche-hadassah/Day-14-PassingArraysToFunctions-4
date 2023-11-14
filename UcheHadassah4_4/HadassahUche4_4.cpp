/*Use the function swap (shown on slide 57 on Functions-Revision, pass-by-reference) 
to write a void function called Reverse that takes as parameters an integer array a1 
and the array size (as integer n) and reverses the array a1 so that its last element 
becomes first, its second-to-last becomes its second etc. (NOTE: This function alters 
the array a1. You should not use any other array to store the reversed version).
Write a main program to test your function by printing the array before the call to 
Reverse and after. (You need not use user defined array here. You can hard-code the 
input array in the main program using some initializers)*/
#include<iostream>
using namespace std;
//Function Prototypes
void swap(int&, int&);
void Reverse(int[], int);
int main()
{

}

void Reverse(int a1[], int n)
{

}
//The function from slide 57
void swap(int &a, int &b) 
{
  int temp=a;
  a=b;
  b=temp;
}