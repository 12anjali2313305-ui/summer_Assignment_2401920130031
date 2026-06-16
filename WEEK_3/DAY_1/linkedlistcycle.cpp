class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode* temp = head;

        while(temp != NULL) {

            ListNode* curr = temp->next;

            while(curr != NULL) {

                if(curr == temp)
                    return true;

                curr = curr->next;
            }

            temp = temp->next;
        }

        return false;
    }
};
