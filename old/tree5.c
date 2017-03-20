#include <stdlib.h>
#include <string.h>
#include <stdio.h>


typedef struct node {
	int id;
	struct node *left;
	struct node *right;
} treenode;


/* FILL ME in */
breadthFirst(t)
treenode *t;
{
}




main (argc, argv, envp)
int argc;
char **argv, **envp;
{

	treenode *t;

	/* build a tree any way you like with at least 5 nodes */

	/* print it out breadth first, use a queue (so write one first) */
	breadthFirst(t);
}
