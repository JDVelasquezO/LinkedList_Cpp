//
// Created by jdvelasquezo on 20/02/21.
//

#include "iostream"
#include "LinkedList.h"
#include "Node.h"
using namespace std;

LinkedList::LinkedList() {
    this->start = nullptr;
    this->length = 0;
}

void LinkedList::addStart(char value) {
    Node *node = new Node(value);
    node->next = this->start;
    this->start = node;
    this->length += 1;
}

void LinkedList::addFinish(char value) {
    Node *node = new Node(value);
    if (isEmpty()) {
        this->start = node;
    } else {
        Node *pointer = this->start;
        while (pointer->next != nullptr) {
            pointer = pointer->next;
        }
        pointer->next = node;
    }

    this->length += 1;
}

void LinkedList::pop() {
    if (!isEmpty()) {
        Node *first = this->start;
        this->start = this->start->next;
        first->next = nullptr;
        this->length -= 1;
    }
}

void LinkedList::deque() {
    if (!isEmpty()) {
        if (this->start->next == nullptr) {
            this->start = nullptr;
        } else {
            Node *pointer = this->start;
            while (pointer->next->next != nullptr) {
                pointer = pointer->next;
            }

            pointer->next = nullptr;
        }

        this->length -= 1;
    }
}

void LinkedList::getValues() {
    Node *pointer = this->start;
    while (pointer != nullptr) {
        cout << pointer->value << endl;
        pointer = pointer->next;
    }
}

bool LinkedList::isEmpty() {
    return this->start == nullptr;
}

int LinkedList::getLength() {
    return this->length;
}
