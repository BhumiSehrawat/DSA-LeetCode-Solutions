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
    bool isPalindrome(ListNode* head) {
        vector<int>original;
        ListNode* curr=head;
        while(curr!=NULL){
            original.push_back(curr->val);
            curr=curr->next;
        }
        vector<int>reversed=original;
        reverse(reversed.begin(),reversed.end());
        if(reversed==original){
            return true;
        }
        return false;
    }
};