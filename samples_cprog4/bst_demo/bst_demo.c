#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h> // used by malloc
#include <time.h>
struct treeNode {
	int data;
	struct treeNode* left, * right; 	// pointers to left and right
} *root = NULL;  	//root is a global pointer to the root entry

void branching(char);		// function forward declaration
void insertion();
struct treeNode* search(struct treeNode*, int);
void traverse(struct treeNode*);


int main() {  	// print a menu for selection
	char ch = 'i';
	srand((unsigned)time(0));  // Use current time as seed
	while (ch != 'q') {
		printf("Enter your selection\n");
		printf("		i: insert a new entry\n");
		printf("		s: search an entry\n");
		printf("		t: traverse the tree and print\n");
		printf("		q: quit \n");
		ch = getchar();
		if (ch == '\n')  ch = getchar(); // flush the input buffer
		ch = tolower(ch);
		branching(ch);
	}
}

void branching(char c) {    // branch to different tasks
	int key;
	switch (c) {
	case 'i':
		insertion();  // Not passing root, but use it as global
		break;
	case 's':
		printf("Enter the key to search\n");
		scanf("%d", &key);
		search(root, key);	// root call-by-value
		break;
	case 't':
		traverse(root);		// print all data
		break;
	default:
		printf("Invalid input\n");
	}
}

void traverse(struct treeNode* top) {
	struct treeNode* p = top;
	if (p != NULL) {
		traverse(p->left);
		printf("data = %d\n", p->data);
		traverse(p->right);
	}
}

struct treeNode* search(struct treeNode* top, int key) {    // print data and email
	struct treeNode* p = top;
	if (key == p->data)
		printf("data = %d\n", p->data);
	if (key <= p->data) {
		if (p->left == NULL) return p;
		else return search(p->left, key);
	}
	else {
		if (p->right == NULL) return p;
		else return search(p->right, key);
	}
	return p;
}

void insertion() {    		// insert a new entry
	struct treeNode* p, * q;
	int i, n, key;
	printf("Enter the number of entries you want to insert\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		p = (struct treeNode*)malloc(sizeof(struct treeNode));
		if (p == NULL) { printf("out of memory\n"); exit(0); }
		key = rand() % 100;	// a random key
		p->data = key;
		p->left = NULL; p->right = NULL;
		if (root == NULL) root = p;	// tree empty
		else {
			q = search(root, key);
			if (key <= q->data) q->left = p;
			else  q->right = p;
		}
	}
}