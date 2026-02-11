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

// deletion 
// Delete the head of DLL
Node* deletehead(Node* head){
    if(head == NULL || head->next== NULL) return NULL;
    Node* prev = head;
    head=head->next;
    head->back = nullptr;
    prev->next = nullptr;
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
    vector<int> arr = {2,4,5,7,9};
    Node* head = Convertarr2DLL(arr);
    head = deletehead(head);
    print(head);
    return 0;
}