/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* ptr = head;
        while(ptr)
        {
            n++;
            ptr = ptr->next;
        }
        vector<ListNode*> ans;
        
        if(n <= k)
        {
            ptr = head;
            ans.push_back(ptr);
            while(ptr)
            {
                if(ptr->next){
                     ans.push_back(ptr->next);
                     ptr->next = NULL;
                     ptr = ans.back();
                     k--;
                }
                else 
                    break;
            }
            k--;
            while(k--)
                ans.push_back(NULL);
        }
        else {
            int r = n % k;
            ptr = head;
            int d = n/k;
            int i = 1;
            ans.push_back(ptr);
            while(ptr)
            {
                if(i == d && r == 0)
                {
                    
                    i = 1;
                    if(ptr->next){
                    ans.push_back(ptr->next);
                    ptr->next = NULL;
                    ptr = ans.back();
                        continue;
                    }
                    
                }
                else if(r != 0 && i == d+1)
                {
                    r--;
                    i = 1;
                    if(ptr->next){
                    ans.push_back(ptr->next);
                    ptr->next = NULL;
                    ptr = ans.back();
                        continue;
                    }
                }
                 
                ptr = ptr->next;
                i++;
                
            }
        }
        
        
        return ans;
    }
};
