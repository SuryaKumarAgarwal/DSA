#include<bits/stdc++>
using namespace std;

calss Node{
    public:
        int data;
        node* next;
        node(int val){
            data = val;
            next = NULL;
        }
}

void insertAtTail(Node* head, int data){
    Node* n = new Node(data);
    Node* temp = head;
    while(temp->next!= NULL){
        temp = temp -> next;
    }
    temp->next=n;
    return head;
}
void print(int head)