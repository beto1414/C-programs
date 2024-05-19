#include "doubly-linked.h"
#include <iostream>

using namespace std;

List::List() {
    head = NULL;
}

List::~List() {
    Node *curr = head;
    Node *next;

    while (curr != NULL) {
        next = curr->next;
        delete curr;
        curr = next;
    }
}

void List::insert(int i) {
    Node *n = new Node;
    n->elem = i;
    n->next = NULL;

    if (head == NULL) {
        n->prev = NULL;
        head = n;
    } else {
        Node *tail = head;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = n;
        n->prev = tail;
    }
}



void List::reverse() {
    Node *curr = head;
    Node *prev = NULL, *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev; 
        prev = curr;
        curr = next;
    }
    head = prev;
}

void List::print() {
    Node *curr = head;

    while (curr != NULL) {
        cout << curr->elem << " ";
        curr = curr->next; 
    }
    cout << endl;

}
