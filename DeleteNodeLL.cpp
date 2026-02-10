#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* deleteNode(Node* head,int x){
    if(x==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* curr=head;
    for(int i=1;i<x-1;i++){
        curr=curr->next;
    }
    Node* temp=curr->next;
    curr->next=temp->next;
    delete temp;
    return head;
}
void printList(Node* head){
    while(head!=NULL){
        cout<<head->data;
        if(head->next!=NULL)cout<<"->";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    if(n==0) return 0;
    int val;
    cin>>val;
    Node* head=new Node(val);
    Node* tail=head;
    for(int i=1;i<n;i++){
        cin>>val;
        tail->next=new Node(val);
        tail=tail->next;
    }
    int x;
    cin>>x;
    head=deleteNode(head,x);
    printList(head);
    return 0;
}