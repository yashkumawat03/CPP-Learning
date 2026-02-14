#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};

Node* sortLL(Node* head){
    Node* zerohead = new Node(-1);
    Node* onehead = new Node(-1);
    Node* twohead = new Node(-1);
    Node* zero = zerohead;
    Node* one = onehead;
    Node* two = twohead;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == 0){
            zero->next = temp;
            zero = zero->next;
        }
        else if(temp->data == 1){
            one->next = temp;
            one = one->next;
        }
        else{
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }
    zero->next = (onehead->next)? onehead->next:twohead->next;
    one->next = twohead->next;
    two->next = NULL;
    Node* newHead = zerohead->next;
    return newHead;
}

// Converting arr to DLL
Node* Convertarr2DLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

// Print the array
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
}

int main(){
    vector<int> arr = {0,0,1,1,0,2,0,1,0,2,1};
    Node* head = Convertarr2DLL(arr);
    head = sortLL(head);
    print(head);
    return 0;
}