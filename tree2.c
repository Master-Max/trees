#include <stdlib.h>
#include <string.h>
#include <stdio.h>


typedef struct node {
	int id;
	struct node *left;
	struct node *right;
} treenode;


int countNodes(t)
treenode *t;
{
}




main (argc, argv, envp)
int argc;
char **argv, **envp;
{

	treenode *t;
	/* build a binary tree with at least 6 nodes */

	printf("the tree has %d nodes\n", countNodes(t));
}
