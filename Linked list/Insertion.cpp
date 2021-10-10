#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
        int data;
        Node *next;
        Node (int val){
            data = val;
            next = NULL ;//nullptr or NULL
        }
        
};
Node *insertAtTail(Node* head, int data){
    Node *n = new Node(data);
    if (head==NULL){
        head = n;
        return head;
    }
    Node* temp= head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n;
    return head;
}
void print(Node* head){
    int len=1;
    cout<<head->data;
    head=head->next;
    while(head){
        cout<<"->"<<head->data;
        len++;
        head=head->next;
    }
    cout<<" len = "<<len<<endl;
}
Node *insertion(Node*head, int data, int ind)
{
    Node *n =new Node(data);
    if(ind==0){
        n->next=head;
        head=n;
        return head;
    }
    Node* temp=head;
    for(int i=0;temp->next!=NULL && i< ind-1;i++) temp=temp->next;

    n->next=temp->next;
    temp->next=n;
    return head;
    
}
int len(Node * head){
    int len=0;
    while(head) len++,head=head->next;
    return len;

}
int main(){
    Node* head=NULL;
    head=insertAtTail(head,1);
    head=insertAtTail(head,2);
    head=insertAtTail(head,4);
    head=insertAtTail(head,5);
    print(head);
    cout<<endl;

    head=insertion(head,3,len(head)/2);
    print(head);
    
}