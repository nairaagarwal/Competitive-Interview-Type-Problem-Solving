/* Given the head of a linked list,
 remove the nth node from the end of the list and return its head.

Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Problem Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
*/


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* rightPtr = head;
        while (--n) {
            rightPtr = rightPtr->next;
        }
		// Now rightPtr is the nth node from the first
		
        if (!rightPtr->next) {    // head is the nth node from the last
            return head->next;
        }
        
        rightPtr = rightPtr->next;
		ListNode* leftPtr = head;
		
		// Now rightPtr is (n+1) nodes away from leftPtr
		// We'll keep the same distance between two pointers
        while(rightPtr->next) {
            leftPtr = leftPtr->next;
            rightPtr = rightPtr->next;
        }
		
		// Now rightPtr points to the last node and rightPtr is (n+1) nodes away from leftPtr
		// So leftPtr->next points to the nth node from the last
		// So remove leftPtr->next
        leftPtr->next = leftPtr->next->next;
        return head;
    }
};