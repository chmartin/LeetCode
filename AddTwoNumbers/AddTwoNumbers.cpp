#include<iostream>
#include<stdlib.h>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};  

//Chris looked at solution because of issues with list initialization... ugh gotta learn!
int main()
{
	//initialize inputs
	ListNode* l1 = new ListNode(2);
	l1->next = new ListNode(4);
	l1->next->next = new ListNode(3);
	ListNode* l2 = new ListNode(5);
	l2->next = new ListNode(6);
	l2->next->next = new ListNode(4);

	//soluiton, initialize first node to 0
	ListNode* solution = new ListNode(0);
	ListNode* a = l1;
	ListNode* b = l2;
	//use current to iterate through and set values
	ListNode* current = solution;
	int tens = 0;
	while (a != NULL || b != NULL)
	{
		int one = (a != NULL) ? a->val : 0;
		int two = (b != NULL) ? b->val : 0;
		//std::cout << one << "+" << two << "+" << tens << std::endl;
		int sum = one + two + tens;
		tens = sum / 10;
		current->next = new ListNode(sum % 10);
		//you did it move to the next node
		current = current->next;
		if (a != NULL) a = a->next;
		if (b != NULL) b = b->next;
	}

	//add entry if last sum > 10
	if(tens > 0)
	{
		solution->next = new ListNode(tens);
	}
	

	//use reader to iterate through and read vlaues, remember to scrape off the leading 0
	ListNode* reader = solution->next;
	
	while(reader != NULL)
	{
		std::cout << reader->val << std::endl;
		reader = reader->next;
	}
	return 0;
}
