#include <stdio.h> 
#include <stdlib.h> 
 
// Node structure 
typedef struct Node { 
	int data; 
	struct Node *left, *right; 
} Node; 
 
// Create a new node 
Node* newNode(int value) { 
	Node* temp = (Node*)malloc(sizeof(Node)); 
	temp->data = value; 
	temp->left = temp->right = NULL; 
	return temp; 
} 
 
// Insert a node 
Node* insert(Node* root, int value) { 
	if (root == NULL) 
    	return newNode(value); 
	if (value < root->data) 
    	root->left = insert(root->left, value); 
	else if (value > root->data) 
    	root->right = insert(root->right, value); 
	return root; 
} 
 
// Search for a value 
Node* search(Node* root, int value) { 
	if (root == NULL || root->data == value) 
    	return root; 
	if (value < root->data) 
    	return search(root->left, value); 
	else 
    	return search(root->right, value); 
} 
 
// Inorder traversal 
void inorder(Node* root) { 
	if (root != NULL) { 
        inorder(root->left); 
        printf("%d ", root->data); 
        inorder(root->right); 
	} 
} 
 
int main() { 
	Node* root = NULL; 
	root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 70); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 60); 
    insert(root, 80); 
 
    printf("Inorder traversal: "); 
    inorder(root); 
    printf("\n"); 
 
	int key = 40; 
	if (search(root, key) != NULL) 
        printf("%d found in BST\n", key); 
	else 
        printf("%d not found in BST\n", key); 
 
	return 0; 
} 
