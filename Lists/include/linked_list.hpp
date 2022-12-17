#pragma once

#include <iostream>

#include "simple_node.hpp"

class LinkedList {
  /*private:
    Node* head;
    int _size;*/
  public:
    Node* head;
    int _size;
    LinkedList();
    ~LinkedList();
    void add(int number);
    int removeOnceOccurrence(int number);
    void removeAllOccurrences(int number);
    void search(int number);
    void print();
    int size();
};