/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
}*temp01=NULL,*temp02=NULL;

struct node * sortLinkedList(struct node *head) {
	int temp;
	if (head==NULL)
	return NULL;
	temp01 = head;
	while (temp01->next != NULL)
	{
		temp02 = temp01->next;
		while (temp02 != NULL)
		{
			if (temp01->num > temp02->num)
			{
				temp = temp01->num;
				temp01->num = temp02->num;
				temp02->num = temp;
			}
			temp02 = temp02->next;
		}
		temp01 = temp01->next;
	}
	return head;
}