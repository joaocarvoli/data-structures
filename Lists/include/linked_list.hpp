#pragma once

#include <iostream>

#include "simple_node.hpp"

class LinkedList {
  private:
    Node* head;
    int _size;
  public:
    LinkedList();
    ~LinkedList();
    void add(double number);
    void print();
    int size();
};