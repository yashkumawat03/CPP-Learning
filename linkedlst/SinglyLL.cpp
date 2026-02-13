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

// CONVERTING ARRAY TO LINKED LIST
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

// PRINT THE LINKED LIST
void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Deletion 
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
            prev->next =temp->next;
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


// Insertion
// Insertion at head

Node* inserthead(Node* head, int val){
    Node* temp = new Node(val,head);
    return temp;
}

//Insert at tail
Node* inserttail(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

// Insert element at k
Node* insertk(Node* head, int val, int k){
    if(head == NULL){
        if(k==1) return new Node(val);
        else return head;
    }

    if(k==1){
        Node* newNode = new Node(val,head);
        return newNode;
    }
    int cnt =0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        if(cnt == k-1){
            Node* newNode = new Node(val,temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

// Insertion of before an element
Node* insertbeforele(Node* head, int val, int ele){
    if(head == NULL){
       return NULL;
    }

    if(head->data==ele){
        Node* newNode = new Node(val,head);
        return newNode;
    }
   
    Node* temp = head;
    while(temp->next!=NULL){
      
        if(temp->next->data == ele){
            Node* newNode = new Node(val,temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
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
     head = deletek(head,2);
    //head = deleteelement(head,15);

    //head = inserthead(head,15);
    //head = inserttail(head,100);
    //head = insertk(head,15,5);
    //head = insertbeforele(head,100,9);
    printLL(head);

}