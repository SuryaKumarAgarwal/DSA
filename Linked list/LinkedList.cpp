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
Node* insertAthead(Node* head,int data){
    if(!head){
        head=new Node(data);
        return head;
    }
    Node * n=new Node(data);
    n->next=head;
    head=n;
    return head;

}
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
    cout<<head->data;
    head=head->next;
    while(head){
        cout<<"->"<<head->data;
        head=head->next;
    }
}
int main(){
    Node* head=NULL;
    head=insertAtTail(head,1);
    head=insertAtTail(head,2);
    head=insertAtTail(head,3);
    head=insertAtTail(head,4);
    print(head);
    
}