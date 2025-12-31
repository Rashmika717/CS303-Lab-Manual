#include <stdio.h> 
#include <string.h> 
 
int linearSearch(char arr[][20], int n, char key[]) { 
	for (int i = 0; i < n; i++) { 
    	if (strcmp(arr[i], key) == 0) { 
        	return i; // Found at index i 
    	} 
	} 
	return -1; // Not found 
} 
 
int main() { 
	char arr[5][20] = {"apple", "banana", "cherry", "date", "fig"}; 
	char key[20]; 
    printf("Enter string to search: "); 
    scanf("%s", key); 
 
	int index = linearSearch(arr, 5, key); 
	if (index != -1) 
        printf("%s found at index %d\n", key, index); 
	else 
        printf("%s not found in the array.\n", key); 
	return 0; 
} 
