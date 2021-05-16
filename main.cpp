#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {

    LinkedList *linkedList = new LinkedList();
    linkedList->addStart('P'); // push y queue
    linkedList->addStart('H');
    linkedList->addStart('R');
    linkedList->addStart('E');
    linkedList->addStart('L');
    linkedList->addStart('M');

    linkedList->getValues();
    linkedList->pop();
    linkedList->pop();
    cout << "-------------" << endl;
    linkedList->getValues();
    // cout << linkedList->getLength() << endl;
    /*linkedList->pop();
    linkedList->pop();
    cout << "--------------" << endl;
    linkedList->getValues();
    linkedList->deque();
    cout << "--------------" << endl;
    linkedList->getValues();*/
    return 0;
}
