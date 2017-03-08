#include <stdlib.h>
#include <string.h>
#include <stdio.h>


typedef struct node {
	int id;
	struct node *left;
	struct node *right;
} treenode;


/* FILL ME in */
inorder(t)
treenode *t;
{
	if(!t){
		return 0;
	}	
	inorder(t->left);
	printf("%c", t->id);	
	inorder(t->right);
}



/* FILL ME in */
postorder(t)
treenode *t;
{
	if(!t){
		return 0;
	}	
	postorder(t->left);
	postorder(t->right);
	printf("%c", t->id);
}



preorder(t)
treenode *t;
{
	if(!t){
		return 0;
	}	
	printf("%c", t->id);
	preorder(t->left);
	preorder(t->right);
}




main (argc, argv, envp)
int argc;
char **argv, **envp;
{

	

/* print out the tree from the first assignment:*/

	
	treenode *n;
	n = malloc(5*sizeof(treenode));

	n[0].id = 'a';
	n[1].id = 'b';
	n[2].id = 'c';
	n[3].id = 'd';
	n[4].id = 'z';

	n[0].left = &(n[1]);
	n[0].right = &(n[2]);

	
	n[1].left = 0;
	n[1].right = 0;


	n[2].left = &(n[3]);
	n[2].right = &(n[4]);


	n[3].left = 0;
	n[3].right = 0;


	n[4].left = 0;
	n[4].right = 0;

	inorder(n);
	printf("\n");
	postorder(n);
	printf("\n");
	preorder(n);
	printf("\n");
	return 0;

/*
      a
    /   \
   b    c
       / \
      d  z

 print the nodes out three times:
    preorder
    inorder
    postorder

you will have to create the inorder() and postorder()
print functions to do this
*/
}
