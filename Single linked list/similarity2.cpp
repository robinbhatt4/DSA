#include <iostream>
#include <unordered_set>

// Define the struct for a singly linked list node
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Function to print the similar elements between two linked lists
void printSimilarElements(Node* list1, Node* list2) {
    std::unordered_set<int> elements;

    // Traverse the first list and store its elements in a set
    while (list1 != nullptr) {
        elements.insert(list1->data);
        list1 = list1->next;
    }

    // Traverse the second list and print common elements
    while (list2 != nullptr) {
        if (elements.find(list2->data) != elements.end()) {
            std::cout << list2->data << " ";
        }
        list2 = list2->next;
    }

    std::cout << std::endl;
}

// Function to print a linked list
void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create two singly linked lists
    Node* list1 = new Node(1);
    list1->next = new Node(2);
    list1->next->next = new Node(3);

    Node* list2 = new Node(2);
    list2->next = new Node(3);
    list2->next->next = new Node(4);

    // Print the lists
    std::cout << "List 1: ";
    printList(list1);
    std::cout << "List 2: ";
    printList(list2);

    // Print similar elements between the two lists
    std::cout << "Similar elements: ";
    printSimilarElements(list1, list2);

    // Clean up memory (free dynamically allocated nodes)
    while (list1 != nullptr) {
        Node* temp = list1;
        list1 = list1->next;
        delete temp;
    }

    while (list2 != nullptr) {
        Node* temp = list2;
        list2 = list2->next;
        delete temp;
    }

    return 0;
}
