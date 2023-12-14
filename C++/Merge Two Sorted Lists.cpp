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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3;
        ListNode* curr;

        if(!list1 || !list2){ // just to do 1 if needed, assuming these cases are rare, dont want to do more if statements on a large scale
            if(!list1){
                return list2;
            }

            if(!list2){
                return list1;
            }
        }
        
        if(list1 -> val <= list2 -> val){
            list3 = curr = list1;
            list1 = list1 -> next;
        }

        else{
            list3 = curr = list2;
            list2 = list2 -> next;
        }

        while(list1 && list2){
            if(list1 -> val < list2 -> val){
                curr -> next = list1;
                list1 = list1 -> next;
            }

            else{
                curr -> next = list2;
                list2 = list2 -> next;
            }

            curr = curr -> next;
        }
        
        if(!list1){
            curr -> next = list2;
        }
        else{
            curr -> next = list1;
        }

        return list3;

    }
};