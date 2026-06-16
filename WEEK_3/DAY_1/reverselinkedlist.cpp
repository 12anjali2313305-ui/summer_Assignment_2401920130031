class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        vector<int> v;
        ListNode* temp = head;

        while(temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;
        int i = v.size() - 1;

        while(temp != NULL) {
            temp->val = v[i];
            i--;
            temp = temp->next;
        }

        return head;
    }
};
