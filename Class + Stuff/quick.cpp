/* Quick sort*/
/*Name : satyam Kumar Jha*/
#include <bits/stdc++.h>
using namespace std;
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int partition (int array[], int low, int high)
{
	int pivot = array[high]; 
	int i = (low - 1); 

	for (int j = low; j <= high - 1; j++)
	{
		
		if (array[j] < pivot)
		{
			i++; 
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}


void quickSort(int array[], int low, int high)
{
	if (low < high)
	{
		
		int pi = partition(array, low, high);
		quickSort(array, low, pi - 1);
		quickSort(array, pi + 1, high);
	}
}


void printArray(int array[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}

int main()
{
	int array[] = {6,7,1,2,3,9,8,4,5};
	int size = sizeof(array) / sizeof(array[0]);
	cout<<"The original array is : ";
	printArray(array, size);
	quickSort(array, 0, size- 1);
	cout<<"The sorted array is :";
	printArray(array, size);
	return 0;
}

