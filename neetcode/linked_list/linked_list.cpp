#include <iostream>

// Define the structure for a node in the linked list
struct Node {
    int data;
    Node* next;
    
    // Constructor to initialize node with given data
    Node(int val) : data(val), next(nullptr) {}
};

// Define the LinkedList class
class LinkedList {
private:
    Node* head; // Pointer to the head of the linked list

public:
    // Constructor to initialize an empty linked list
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the beginning of the linked list
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Function to insert a new node at the end of the linked list
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to delete a node with given value from the linked list
    void deleteNode(int val) {
        if (head == nullptr) {
            return;
        }
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* prev = nullptr;
        Node* curr = head;
        while (curr != nullptr && curr->data != val) {
            prev = curr;
            curr = curr->next;
        }
        if (curr == nullptr) {
            std::cout << "Element not found in the list." << std::endl;
            return;
        }
        prev->next = curr->next;
        delete curr;
    }

    // Function to search for a node with given value in the linked list
    bool search(int val) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == val) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    // Function to display the elements of the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList list;

    // Insert some elements into the linked list
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);
    list.insertAtEnd(5);

    std::cout << "Initial linked list:" << std::endl;
    list.display(); // Display the initial linked list

    // Perform basic operations on the linked list
    list.insertAtBeginning(0);
    list.deleteNode(3);
    list.deleteNode(6); // Trying to delete a non-existing element
    list.insertAtEnd(6);
    list.insertAtEnd(7);

    std::cout << "Linked list after operations:" << std::endl;
    list.display(); // Display the linked list after operations

    // Search for an element in the linked list
    int searchElement = 5;
    if (list.search(searchElement)) {
        std::cout << "Element " << searchElement << " found in the list." << std::endl;
    } else {
        std::cout << "Element " << searchElement << " not found in the list." << std::endl;
    }

    return 0;
}
