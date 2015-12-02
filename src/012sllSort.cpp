/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
}*temp0 = NULL;

void sll_012_sort(struct node *head){
	int countZeros = 0, countOnes = 0, countTwos = 0;
	temp0 = head;
	while (temp0 != NULL)
	{
		if (temp0->data == 0) countZeros++;
		else if (temp0->data == 1) countOnes++;
		else if(temp0->data==2) countTwos++;
		temp0 = temp0->next;
	}
	temp0 = head;
	while (countZeros > 0)
	{
		temp0->data = 0;
		temp0 = temp0->next;
		countZeros--;
	}
	while (countOnes > 0)
	{
		temp0->data = 1;
		temp0 = temp0->next;
		countOnes--;
	}
	while (countTwos > 0)
	{
		temp0->data = 2;
		temp0 = temp0->next;
		countTwos--;
	}
}