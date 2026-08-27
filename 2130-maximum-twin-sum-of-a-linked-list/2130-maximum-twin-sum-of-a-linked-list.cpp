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
    int pairSum(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow;
        ListNode* prev = nullptr;
        while(second){
            ListNode* next = second->next;
            second->next = prev;
            prev = second;
            second = next;
        }
        ListNode* first = head;
        int maxSum = 0;
        while(prev){
            maxSum = max(maxSum,first->val+prev->val);
            first = first->next;
            prev = prev->next;
        }
        return maxSum;
    }
};