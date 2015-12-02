/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
}*temp1=NULL,*temp2=NULL;

struct node * removeEveryKthNode(struct node *head, int K) {
	int count = 1;
	if (K <= 1 || head == NULL)
	return NULL;
	temp1 = head;
	while (temp1->next != NULL)
	{
		if (count % K == (K-1))
		{
			temp2 = temp1->next; 
			temp1->next = temp2->next; 
			if (temp1->next == NULL) break;
			temp2->next = NULL;
			count = count + 2;
			temp1 = temp1->next;
		}
		else
		{
			temp1 = temp1->next;
			count++;
		}
	}
	return head;
}