#include<iostream>
using namespace std;

// LINKED LIST: multiple blocks of memory linked to each other

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

// INSERTING ELEMENT AT START(HEAD)
void insertAthead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

// INESRTING ELEMENT AT TAIL:
void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}
// DISPLAYING THE LINKED LIST:
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

// SEARCHING NO. IN A LINKED LIST:
bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// DELETION AT HEAD IN A LINKED LIST:

void deleteAtHead(node* &head){

    node* todelete=head;
    head = head->next;

    delete todelete;
}


// DELETION IN LINKED LIST
void deletion(node* &head, int val){

    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }

    node* temp= head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}



//MAIN FUNCTION CALLING ALL THE OTHER FUNCTIONS
int main(){

    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    // display(head);
    // cout<<search(head, 3)<<endl;;

    deletion(head, 3); // for deletion of element in linked list
    display(head);

    deleteAtHead(head); //for deletion of head in linked list
    display(head);

    return 0;
}
