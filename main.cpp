#include <iostream>

#include "./Lists/include/simple_node.hpp"
#include "./Lists/include/linked_list.hpp"

void testSimpleLinkedList();

int main(){
  testSimpleLinkedList();
}

void testSimpleLinkedList(){
  LinkedList* list01 = new LinkedList();
  list01->add(2);
  list01->add(2);
  list01->add(4);
  list01->print();
  list01->search(2);
  list01->search(5);
  list01->removeOnceOccurrence(2);
  list01->add(5);
  list01->add(7);
  list01->print();
  list01->removeOnceOccurrence(5);
  list01->print();
  list01->add(7);
  list01->print();
  list01->removeOnceOccurrence(7);
  list01->print();
  list01->removeOnceOccurrence(4);
  list01->print();
  printf("The size of Linked List is: %d\n", list01->size());
}