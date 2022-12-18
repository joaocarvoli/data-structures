#pragma once

#include <iostream>

#include "simple_node.hpp"

class LinkedList {
  private:
    Node* head;
    int _size = 0;
  public:
    LinkedList();
    ~LinkedList();
    void add(int number);
    void removeOnceOccurrence(int number);
    void removeAllOccurrences(int number);
    void search(int number);
    int size();

    friend ostream &operator<<(ostream &os, LinkedList &list); // friend class that can be access all attributes from the Linked List class
};