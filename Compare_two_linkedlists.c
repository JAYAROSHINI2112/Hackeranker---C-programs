bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
  
SinglyLinkedListNode *temp1,*temp2;
int ptr = 0;
temp1 = head1;temp2 = head2;
if (temp1 == NULL && temp2 == NULL)
{
    ptr = 1;
}
else
{
    while(temp1 != 0 && temp2 != 0)
    {
        if (temp1 -> data == temp2 ->data)
        {
            ptr = 1; 
        }
        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
    }
}
   return ptr;
}
