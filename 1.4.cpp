#include <iostream>
using namespace std;
int steps=0;

int search(int arr[], int n, int x)
{
	steps+=1;
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver code
int main(void)
{
	int arr[] = {2, 3, 4, 10, 40};
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, n, x);
	(result == -1) ? 
	cout << "Element is not present in array" : 
	cout << "Element is present at index " << result;
	cout<<endl<<"no of steps required to complete : "<<steps;
	return 0;
}

