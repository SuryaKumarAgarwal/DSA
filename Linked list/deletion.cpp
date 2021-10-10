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
    cout<<head->data;
    head=head->next;
    while(head){
        cout<<"->"<<head->data;
        head=head->next;
    }
}
Node* deletion(Node* head,int ind){
    if(ind==0){
        head=head->next;
        return head;
    }
    Node* temp = head;
    for(int i=0; temp->next->next!=NULL && i<ind-1; i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
int main(){
    Node* head=NULL;
    head=insertAtTail(head,1);
    head=insertAtTail(head,2);
    head=insertAtTail(head,3);
    head=insertAtTail(head,4);
    print(head);
    cout<<endl;
    head = deletion(head,3);
    print(head);
    
}