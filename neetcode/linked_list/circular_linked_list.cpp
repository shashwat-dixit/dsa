#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void deleteNode(int val) {
        if (!head) {
            return;
        }
        if (head->data == val) {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            if (head == head->next) {
                delete head;
                head = nullptr;
            } else {
                temp->next = head->next;
                delete head;
                head = temp->next;
            }
            return;
        }
        Node* prev = head;
        Node* curr = head->next;
        while (curr != head && curr->data != val) {
            prev = curr;
            curr = curr->next;
        }
        if (curr != head) {
            prev->next = curr->next;
            delete curr;
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
            std::cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        std::cout << "head" << std::endl;
    }
};

int main() {
    CircularLinkedList list;

    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);

    std::cout << "Circular linked list:" << std::endl;
    list.display();

    list.insertAtBeginning(0);
    list.deleteNode(3);

    std::cout << "Circular linked list after operations:" << std::endl;
    list.display();

    return 0;
}
