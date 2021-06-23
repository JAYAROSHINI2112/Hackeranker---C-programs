void reversePrint(SinglyLinkedListNode* llist) {
   int stack[10],i=0,top,j; 
   SinglyLinkedListNode*temp;
   temp=llist;
 if(temp>0){  
   while(temp!=NULL){
       stack[i]=temp->data;
       temp=temp->next;
       i++;
    }
    top=i-1;
    j=top-1;
    while(top>=0){
        printf("%d\n",stack[top]);
        top--;
    }
  }
}
