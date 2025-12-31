#include <stdio.h> 
#include <stdlib.h> 
 
// BST Node definition 
struct Node { 
	int data; 
	struct Node *left, *right; 
}; 
 
// Create a new node 
struct Node* newNode(int data) { 
	struct Node* node = (struct Node*)malloc(sizeof(struct Node)); 
	node->data = data; 
	node->left = node->right = NULL; 
	return node; 
} 
 
// Insert into BST 
struct Node* insert(struct Node* root, int data) { 
	if (root == NULL) return newNode(data); 
	if (data < root->data) 
    	root->left = insert(root->left, data); 
	else 
    	root->right = insert(root->right, data); 
	return root; 
} 
 
// Inorder Traversal (Left, Root, Right) 
void inorder(struct Node* root) { 
	if (root == NULL) return; 
    inorder(root->left); 
    printf("%d ", root->data); 
    inorder(root->right); 
} 
 
// Preorder Traversal (Root, Left, Right) 
void preorder(struct Node* root) { 
	if (root == NULL) return; 
    printf("%d ", root->data); 
	preorder(root->left); 
	preorder(root->right); 
} 
 
// Postorder Traversal (Left, Right, Root) 
void postorder(struct Node* root) { 
	if (root == NULL) return; 
    postorder(root->left); 
    postorder(root->right); 
    printf("%d ", root->data); 
} 
 
int main() { 
	struct Node* root = NULL; 
	// Example BST: Insert nodes 
	int arr[] = {40, 20, 60, 10, 30, 50, 70}; 
	for (int i = 0; i < 7; i++) 
    	root = insert(root, arr[i]); 
 
    printf("Inorder: ");   inorder(root);   printf("\n"); 
    printf("Preorder: ");  preorder(root);  printf("\n"); 
    printf("Postorder: "); postorder(root); printf("\n"); 
	return 0; 
} 
