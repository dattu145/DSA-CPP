#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data = value;
            next = NULL;
        }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
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
    }

    void deleteANode(int key){
        Node* temp = head;
        Node* prev = NULL;

        if(temp != NULL && temp->data == key){
            head = temp->next;
            delete temp;
            return;
        }

        while(temp != NULL && temp->data != key){
            prev = temp;
            temp = temp->next;
        }

        if(temp == NULL) return;
        prev->next = temp->next;
        delete temp;
    }

    void displayNodes(){
        Node* temp = head;

        cout << "Linked List : ";

        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(15);
    list.insertAtEnd(25);
    list.insertAtEnd(20);
    
    list.displayNodes();

    list.deleteANode(25);
    list.displayNodes();

    list.deleteANode(10);
    list.displayNodes();
}