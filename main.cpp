#include <iostream>

#include "./Lists/include/simple_node.hpp"
#include "./Lists/include/linked_list.hpp"

int main(){
  LinkedList* list01 = new LinkedList();
  list01->add(2);
  list01->add(4);
  cout << "The size of Linked List is: " << list01->size() << endl;
  list01->print();
}