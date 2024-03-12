#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
    
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!tail) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteNode(int val) {
        if (!head) {
            return;
        }
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            if (head)
                head->prev = nullptr;
            delete temp;
            return;
        }
        Node* temp = head->next;
        while (temp && temp->data != val) {
            temp = temp->next;
        }
        if (!temp) {
            std::cout << "Element not found in the list." << std::endl;
            return;
        }
        if (temp == tail) {
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
            return;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }

    bool search(int val) {
        Node* temp = head;
        while (temp) {
            if (temp->data == val) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " <-> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    DoublyLinkedList list;

    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);

    std::cout << "Doubly linked list:" << std::endl;
    list.display();

    list.insertAtBeginning(0);
    list.deleteNode(3);

    std::cout << "Doubly linked list after operations:" << std::endl;
    list.display();

    return 0;
}
