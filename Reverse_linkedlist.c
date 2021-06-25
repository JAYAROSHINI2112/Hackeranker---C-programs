
SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
  SinglyLinkedListNode *head,*tail,*t;
  
  head = llist;
  while (head != NULL) {
        t = head->next;
        head->next = tail;
        tail = head;
        llist=head;
        head = t;
    }
    return llist;
  
}
