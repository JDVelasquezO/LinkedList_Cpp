//
// Created by jdvelasquezo on 20/02/21.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H
#include "Node.h"

class LinkedList {
public:
    LinkedList();
    void addStart(char value);
    void addFinish(char value);
    void pop(); // Pila (deleteStart)
    void deque(); // Cola (deleteFinish)

    void getValues();
    bool isEmpty();
    int getLength();

    Node* start;
    int length;
};


#endif //LINKEDLIST_LINKEDLIST_H
