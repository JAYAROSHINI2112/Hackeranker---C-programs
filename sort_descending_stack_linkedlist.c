// You are using GCC
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*top=NULL;
void push();
void pop();
void sort(int n);
int main(){
    push();
   
}
void push(){
    int n,i,item;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&item);
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=item;
        newnode->next=top;
        top=newnode;
 }
        sort(n);
}
void sort(int m){
   struct node*temp1;
   struct node*temp2;
   struct node*t;
   int k;
   for(int i=m-2;i>=0;i--){
       temp1=top;
       temp2=temp1->next;
      for(int j=0;j<=i;j++){
          if(temp1->data < temp2->data){
              k=temp1->data;
              temp1->data=temp2->data;
              temp2->data=k;
          }
          temp1=temp2;
          temp2=temp2->next;
      }
   }
   t=top;
   while(t!=0){
       printf("%d ",t->data);
       t=t->next;
   }
} 
