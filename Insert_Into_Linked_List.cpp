LLNode* solve(LLNode* head, int pos, int val) {
    LLNode* dummy = new LLNode(0, head);
    LLNode* prev = dummy;
    while (pos--) {
        prev = head;
        head = head->next;
    }
    prev->next = new LLNode(val, head);
    return dummy->next;
}