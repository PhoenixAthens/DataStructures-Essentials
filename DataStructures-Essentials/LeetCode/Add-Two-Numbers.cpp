#include <iostream>
struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x):val(x), next(nullptr){}
    ListNode(int x, ListNode* next): val(x), next(next){}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = l1->val+l2->val;
        ListNode* ln = new ListNode(sum%10);
        ListNode* inUse = &(*ln);
        l1=l1->next;
        l2=l2->next;
        carry=sum/10;
        while(l1!=nullptr || l2!=nullptr){
            inUse->next = new ListNode();
            inUse = inUse->next;
            int temp = 0;
            if(l1!=nullptr){
                temp+=l1->val;
                l1 = l1->next;
            }
            if(l2!=nullptr){
                temp+=l2->val;
                l2 = l2->next;
            }
            temp+=carry;
            carry = temp/10;
            inUse->val = temp%10;
        }
        if(carry!=0){
            inUse->next=new ListNode(carry);
        }
        return ln;
    }
};
