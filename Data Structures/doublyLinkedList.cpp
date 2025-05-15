#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class doublyLinkedList{
    public:
    Node* head;

    doublyLinkedList(){
        head = NULL;
    }

    void insertAtBeginning(int value){
        Node* newNode = new Node(value);

        if(head != NULL){
            newNode->next = head;
            head->prev = newNode;
        }
        head = newNode;
    }

    void displaydll(){
        if(head == NULL) return;

        cout << "Doubly Linked List : ";
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void insertAtEnd(int value){
        Node* newNode = new Node(value);

        if(head == NULL){
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    void insertAtPosition(int value, int position){
        if(position == 1){
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node(value);
        Node* temp = head;
        for(int i = 1; temp != NULL && i < position-1; i++){
            temp = temp->next;
        }

        if(temp == NULL){
            cout << "Position out of Bounds\n";
            return;
        }

        newNode->next = temp->next;

        if(temp->next != NULL){
            temp->next->prev = newNode;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    bool search(int key){
        Node* temp = head;
        
        while(temp != NULL){
            if(temp->data == key) return true;
            temp = temp->next;
        }
        return false;
    }
};

int main(){
    doublyLinkedList dll;
    dll.insertAtBeginning(30);
    dll.insertAtBeginning(40);
    dll.insertAtEnd(10);
    dll.displaydll();
    dll.insertAtPosition(15,6);
    dll.displaydll();
    cout << dll.search(20);
}