#include<iostream>
using namespace std;

struct Node{
    int num;
    Node* next;
};

struct Node* head = NULL;

void insert_node(int n){
    struct Node *new_node = new Node();
    new_node ->num = n;
    new_node ->next = head;
    head = new_node;
}

void display(){
    struct Node* temp = head;
    while (temp!=NULL){
        cout<<temp->num<<" ";
        temp = temp ->next;
    }

}

int main(){
    int n;
    cout<<"enter the number of test cases :";
    cin>>n;
    for(int i =0;i<n;i++){
        int x;
        cout<<"Enter element "<<i+1<<endl;
        cin>>x;
        insert_node(x);
    }
    cout<<"Given linked list is :";
    display();
    return 0;
}
