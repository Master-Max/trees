#include <stdlib.h>
#include <string.h>
#include <stdio.h>


typedef struct node {
	int id;
	struct node *left;
	struct node *right;
} treenode;



/* WRITE A RECURSIVE routine which swaps the 
   left and right child for every node in a given tree */
/* will this operate in pre, in, or post order fashion?
does it matter? if so, why does it matter? */

rotate(t)
treenode *t;
{
}


preorder(t)
treenode *t;
{
	if (!t) return;

	printf("%d\n", t->id);
	preorder(t->left);
	preorder(t->right);
}




main (argc, argv, envp)
int argc;
char **argv, **envp;
{

	/* build a binary tree with at least 6 nodes */

	/* now show your rotate function works */
	preorder(t);
	rotate(t);
	preorder(t);
	
}
