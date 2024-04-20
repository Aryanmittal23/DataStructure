

class Solution {
private:
    ListNode* mergeLists(ListNode* a, ListNode* b) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        
        while (a && b) {
            if (a->val < b->val) {
                tail->next = a;
                a = a->next;
            } else {
                tail->next = b;
                b = b->next;
            }
            tail = tail->next;
        }
        
        tail->next = a ? a : b;
        return dummy.next;
    }
    
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return nullptr;
        
        int n = lists.size();
        while (n > 1) {
            vector<ListNode*> merged(n / 2);
            for (int i = 0; i < n / 2; i++) {
                merged[i] = mergeLists(lists[i * 2], (i * 2 + 1 < n) ? lists[i * 2 + 1] : nullptr);
            }
            n = (n + 1) / 2;
            lists = merged;
        }
        
        return lists[0];
    }
};