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

Node* reverseDLL(Node* head){
    if(head== NULL) return NULL;
    Node* last = NULL;
    Node* current = head;
    while(current != NULL){
        last = current->back;
        current->back = current->next;
        current->next = last;

        current = current->back;
    }
    return last->back;
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
    vector<int> arr = {1,2,3,4,5};
    Node* head = Convertarr2DLL(arr);
    head = reverseDLL(head);
    print(head);
    return 0;
}