#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************
void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){
	if(head == NULL){
		return;
	}
	if(head->val <= pivot){
		smaller = head;
		Node* s = head->next;
		head = NULL;
		smaller->next = NULL;
		llpivot(s,smaller->next,larger,pivot);
		//head = NULL;
	}
	else{
		larger = head;
		Node* s = head->next;
		head = NULL;
		larger->next = NULL;
		llpivot(s,smaller,larger->next,pivot);
	}
	
}

