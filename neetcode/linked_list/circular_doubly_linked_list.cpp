#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class CircularDoublyLinkedList {
private:
    Node* head;

public:
    CircularDoublyLinkedList() : head(nullptr) {}

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head;
            head->prev = head;
        } else {
            newNode->next = head;
            newNode->prev = head->prev;
            head->prev->next = newNode;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head;
            head->prev = head;
        } else {
            newNode->next = head;
            newNode->prev = head->prev;
            head->prev->next = newNode;
            head->prev = newNode;
        }
    }

    void deleteNode(int val) {
        if (!head) {
            return;
        }
        if (head->data == val) {
            if (head == head->next) {
                delete head;
                head = nullptr;
            } else {
                Node* temp = head;
                head->next->prev = head->prev;
                head->prev->next = head->next;
                head = head->next;
                delete temp;
            }
            return;
        }
        Node* temp = head->next;
        while (temp != head && temp->data != val) {
            temp = temp->next;
        }
        if (temp != head) {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        } else {
            std::cout << "Element not found in the list." << std::endl;
        }
    }

    bool search(int val) {
        if (!head) {
            return false;
        }
        Node* temp = head;
        do {
            if (temp->data == val) {
                return true;
            }
            temp = temp->next;
        } while (temp != head);
        return false;
    }

    void display() {
        if (!head) {
            return;
        }
        Node* temp = head;
        do {
            std::cout << temp->data << " <-> ";
            temp = temp->next;
        } while (temp != head);
        std::cout << "head" << std::endl;
    }
};

int main() {
    CircularDoublyLinkedList list;

    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);

    std::cout << "Circular doubly linked list:" << std::endl;
    list.display();

    list.insertAtBeginning(0);
    list.deleteNode(3);

    std::cout << "Circular doubly linked list after operations:" << std::endl;
    list.display();

    return 0;
}
