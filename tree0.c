#include <stdlib.h>
#include <string.h>
#include <stdio.h>


typedef struct node {
	int id;
	struct node *left;
	struct node *right;
} treenode;


main (argc, argv, envp)
int argc;
char **argv, **envp;
{

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


/* manually create nodes to build this tree:

      a
    /   \
   b    c
       / \
      d  z

*/
}
