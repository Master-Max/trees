#include<stdlib.h>
#include<stdio.h>
#include <string.h>

typedef struct anode {
	char *name;
	struct anode *r, *l;
} node;



contains(tree, q) 
node **tree;
char *q;
{
	if(!(*tree)) return;

	if ( strcmp((*tree)->name, q) == 0) printf("yes\n");
	contains(&(*tree)->l, q);
	contains(&(*tree)->r, q);
}



insert(tree, item) 
node **tree;
node *item;
{
	if(!(*tree)) {
		*tree = item;
		return;
	}

	if(strcmp(item->name, (*tree)->name) < 0)
		insert(&(*tree)->l, item);

	else 
		if(strcmp(item->name, (*tree)->name) > 0)
			insert(&(*tree)->r, item);
}


void printTree(tree)
node *tree;
{
	if (! tree) return;
	printTree(tree->l);
	printf("%s\n",tree->name);
	printTree(tree->r);
}



void main(argc, argv, envp)
int argc;
char **argv, **envp;
{
	int i;
	char buf[1024];
	node *curr, *root;

	root = 0;

	while (gets(buf)) {
		curr = (node *)malloc(sizeof(node));
		curr->l = curr->r = NULL;
		curr->name = strdup(buf);
		//printf("insert: %s\n", buf);
		insert(&root, curr);
	}

	contains(&root, argv[1]);
}
