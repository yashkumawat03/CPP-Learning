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

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* DeleteHead(Node* head){
    if(head==NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deletetail(Node* head){
    if(head == NULL || head->next==NULL) return NULL;
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* deletek(Node* head, int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp = head;
        head=head->next;
        delete temp;
        return head;
    }

    int cnt=0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next =prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head; 
}

Node* deleteelement(Node* head, int el){
    if(head==NULL) return head;
    if(head->data == el){
        Node* temp = head;
        head=head->next;
        delete temp;
        return head;
    }

  
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
     
        if(temp->data == el){
            prev->next =prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head; 
}

int main(){
    int k;
    cin >> k;
    vector<int> arr = {6,7,9,10};
    Node* head = CovertArr2LL(arr);
    
    // head = DeleteHead(head);
    // head= deletetail(head);
    // head = deletek(head,2);
    head = deleteelement(head,15);
    printLL(head);

}