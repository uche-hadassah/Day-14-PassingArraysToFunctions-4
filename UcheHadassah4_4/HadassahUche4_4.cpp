/*Uche Hadassah
This program reverses the position of elements in the array such that the last element becomes the first
and vice versa. It makes use of the swap function*/
#include<iostream>
using namespace std;
//Function Prototypes
void swap(int&, int&);
void Reverse(int[], int);
int main()
{
	int array[] = { 1,2,3,4,5,6 };//Hard coded the array inputs
	int size = 6;
	cout << "\nThe array: ";
	for (int i = 0; i < size; i++)//Outputs the array
	{
		cout << array[i];
	}
	Reverse(array, size);//calls the Reverse function
	cout << "\nThe new array is: ";
	for (int j = 0; j < size; j++)//Outputs the Reversed array
	{
		cout << array[j];
	}
	
}

//The function from slide 57
void swap(int& a, int& b)
{
	int temp = a;//Initializes a temporary variable to the first element
	a = b;
	b = temp;
}

void Reverse(int a1[], int n)
{
	int i = 0;
	do
	{
		swap(a1[i], a1[n-1]);//Calls the swap function
		if (i == n)//Ends once they meet in the middle
		{
			break;
		}
		i++;
		n--;
	} while (i < n - 1);
}

