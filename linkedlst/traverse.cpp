#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* CovertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next= temp;
        mover = temp;
    }
    return head;
}

//Length of Linked lsit
int LengthofLL(Node* head){
    int cnt = 0;
    Node*temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

// Searching an element in an linked list
int CheckifPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr = {12,3,4,5,6};
    Node* head = CovertArr2LL(arr);
    // cout << head->data << endl;
    // Traversing the Linked list
    //Node*temp = head;
    // while(temp){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    // Printing the length of linked list
    //cout << LengthofLL(head);
    cout << CheckifPresent(head, 12);
}

