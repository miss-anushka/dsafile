#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void createnode(int data,node *head){
    node *ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
node *n = new node;

n->data= data;
n->next = NULL;
ptr->next = n;
}
void traversal(node *head){
    head = head->next;
while(head != NULL){
    cout<<head->data<<endl;
    head = head->next;
}
}
int main(){
    node *head = new node;
    head->data = 0;
    head->next = NULL;
    createnode(1,head);
    createnode(2,head);

    traversal(head);
    return 0;
}