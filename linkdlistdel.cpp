#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

void deleteNode(Node*& head, int targetValue) {
    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr && current->data != targetValue) {
        previous = current;
        current = current->next;
    }

    if (current == nullptr) {
        // Node not found
        return;
    }

    if (previous == nullptr) {
        // If the node to delete is the head
        head = current->next;
    } else {
        previous->next = current->next;
    }

    delete current;
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    std::cout << "Original Linked List: ";
    printList(head);

    int targetValue = 3;
    deleteNode(head, targetValue);

    std::cout << "Linked List after deleting node with value " << targetValue << ": ";
    printList(head);

    // Clean up the remaining nodes
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
