#include <stdlib.h>
#include <string.h>
#include <stdio.h>


typedef struct node {
	char *name;
	struct node *left;
	struct node *right;
} treenode;




inorder(t)
treenode *t;
{
	if (!t) return;
}



addNode(n,v)
treenode **n;
char *v;
{
	treenode *nxt;
	nxt = malloc(sizeof(treenode));
	memset(nxt, 0, sizeof(nxt));

	nxt->name = v; /* safe - caller creates new storage for each */
	enqueue(nxt);
	
}


main (argc, argv, envp)
int argc;
char **argv, **envp;
{

/* 

prompt the user for a series of names and add them
in the order given to create a complete binary tree


the user enters
  giselle
  magda
  aviva
  ahnk
  havi
  minna
  monique
  ^d


you build:


         giselle
         /  \
    magda    aviva
    / \       /  \
 ahnk havi minna monique


then print it out inorder
this should work for any number of name entered.
(consider using a queue)
*/

	treenode *t = 0;
	char buf[1024];

	while (gets(buf))
		addNode(&t, strdup(buf));

	inorder(t);
}
