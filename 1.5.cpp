#include <iostream> 
using namespace std;

int steps=0; 

 
void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n - 1; i++)  
		for (j = 0; j < n - i - 1; j++){
			steps+=1;
			if (arr[j] > arr[j + 1]) 
				swap(arr[j], arr[j + 1]);
	}
} 
 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

int main() 
{ 
	int arr[] = { 9,8,7,6,5,4,3,2,1}; 
	int N = sizeof(arr) / sizeof(arr[0]); 
	bubbleSort(arr, N); 
	cout << "Sorted array: \n"; 
	printArray(arr, N);
	cout<<endl<<"no of steps required to complete : "<<steps; 
	return 0; 
}

