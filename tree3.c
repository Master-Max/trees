#include <stdlib.h>
#include <string.h>
#include <stdio.h>


typedef struct node {
	int id;
	struct node *left;
	struct node *right;
} treenode;

int count=0;

int countLevels(t)
treenode *t;
{
	if(!t){
		return count;
	}
	count++;
	countLevels(t->left);
}




main (argc, argv, envp)
int argc;
char **argv, **envp;
{

	treenode *t;
	/* build a binary tree with at least 3 levels */

	t = malloc(7*sizeof(treenode));

	int lid = 101;

	for(int i=0;i<7;i++){
		t[i].id=lid;
		lid++;
	}

	t[0].left = &(t[1]);
	t[0].right = &(t[2]);

	t[1].left = &(t[3]);
	t[1].right = &(t[4]);

	t[2].left = &(t[5]);
	t[2].right = &(t[6]);

	for(int i=3; i<6; i++){
		t[i].left = 0;
		t[i].right = 0;
	}

	
	

	printf("the tree has %d levels\n", countLevels(t));
}
