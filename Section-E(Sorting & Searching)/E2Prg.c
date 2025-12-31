#include <stdio.h> 

// Function to perform binary search 
int binarySearch(int arr[], int n, int key) { 
	int low = 0, high = n - 1; 
	while (low <= high) { 
    	int mid = low + (high - low) / 2; 
    	if (arr[mid] == key) 
        	return mid; // Key found, return index 
    	else if (arr[mid] < key) 
        	low = mid + 1; 
    	else 
        	high = mid - 1; 
	} 
	return -1; // Key not found 
} 
 
int main() { 
	int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int key; 
    printf("Enter the number to search: "); 
    scanf("%d", &key); 
	int result = binarySearch(arr, n, key); 
	if (result != -1) 
        printf("Element %d found at index %d.\n", key, result); 
	else 
        printf("Element %d not found in the array.\n", key); 
	return 0; 
} 
