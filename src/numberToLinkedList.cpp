/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
}*head=NULL,*newNode=NULL;

struct node * numberToLinkedList(int N) {
	int n;

		if (N < 0) N *= -1;
		if (N == 0)
		{
			newNode = (struct node*)malloc(sizeof(struct node));
			newNode->num = 0;
			newNode->next = NULL;
			return newNode;
		}
		head = NULL;
		while (N != 0)
		{
			newNode = (struct node*)malloc(sizeof(struct node));
			n = N % 10;
			newNode->num = n;
			if (head == NULL)
				newNode->next = NULL;
			else
				newNode->next = head;
			head = newNode;
			N = N / 10;
		}
	
	return head;
}