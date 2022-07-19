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



int length(node* &head){
    int l=0;
    node* temp = head;

    while(temp != NULL){
        temp= temp->next;
        l++;
    }
    return l;
}

// APPENDING LAST K NODES IN A LINKED LIST:

node* kappend(node* head, int k){

    node* newHead;
    node* newTail;
    node* tail = head;

    int l=length(head);
    k=k%l;
    int count =1;
    while(tail->next !=NULL){
        if(count==l-k){
            newTail = tail;
        }
        if(count == l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next = head;

    return newHead;
}

// FINDING INTERSECTION POINT OF 2 LINKED LIST:




int intersection(node* &head1, node* &head2){
    int l1 = length(head1);
    int l2 = length(head2);


    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d = l1-l2;
        ptr1= head1;
        ptr2 = head2;
    }
    else{
        d=  l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while(d){
        ptr1 = ptr1->next;
        if(ptr1 == NULL){
            return -1;
        }
        d--;
    }
    while(ptr1 !=NULL && ptr2 !=NULL){
        if(ptr1 ==ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1; 
}

void intersect(node* &head1, node* &head2, int pos){
    node* temp1= head1;
    pos--;
    while(pos--){
        temp1 = temp1->next;
    }
    node* temp2 = head2;
    while(temp2->next!=NULL){
        temp2 = temp2->next;

    }
    temp2->next = temp1;
}


// //MAIN FUNCTION CALLING ALL THE OTHER FUNCTIONS
// int main(){

//     // node* head = NULL;
//     // insertAtTail(head, 1);
//     // insertAtTail(head, 2);
//     // insertAtTail(head, 3);
//     // insertAtTail(head, 4);
//     // display(head);

//     // // display(head);
//     // // cout<<search(head, 3)<<endl;;

//     // deletion(head, 3); // for deletion of element in linked list
//     // display(head);

//     // deleteAtHead(head); //for deletion of head in linked list
//     // display(head);

//     // node* newhead= reverse(head); // for reversing linked list
//     // display(newhead);
    
    
//     // node* newhead= reverseRecursive(head); // for reversing linked list using recursion
//     // display(newhead); // COMPLEXITY = O(n)
    

//     node* head = NULL;
//     int arr[] = {1,2,3,4,5,6};
//     for(int i=0; i<6; i++){
//         insertAtTail(head, arr[i]);
//     }
//     display(head);
//     node* newhead = kappend(head, 3);
//     display(newhead);

//     return 0;
// }




// MAIN FUNCTION FOR INTERSECTION LL:

int  main(){
    node* head1 = NULL;
    node* head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head2, 9);
    insertAtTail(head2, 10);
    intersect(head1, head2, 3);
    display(head1);
    display(head2);
    cout<<intersection(head1, head2)<<endl;

    return 0;
}
