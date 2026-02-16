#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node* linkdelete(Node* head,int n,int m){
    Node* curr=head;
    while(curr!=NULL){
        for(int i=1;i<m && curr!=NULL;i++){
            curr=curr->next;
        }
        if(curr==NULL) return head;
        Node* temp=curr->next;
        for(int i=0;i<n && temp!=NULL;i++){
            Node* del=temp;
            temp=temp->next;
            delete del;
        }
        curr->next=temp;
        curr=temp;
    }
    return head;
}
void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
          
    }
    cout<<endl;
}
int main() {
    int size;
    cout << "Enter number of nodes: ";
    cin >> size;

    if (size == 0) return 0;

    int val;
    cin >> val;
    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    int m, n;
    cout << "Enter m (skip) and n (delete): ";
    cin >> m >> n;

    head = linkdelete(head, n, m);

    cout << "Resulting list: ";
    printList(head);

    return 0;
}