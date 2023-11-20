#include <stdio.h>
#include <stdlib.h>

struct node {
  int num;
  struct node* next;
};
typedef struct node Node;

struct linkedList {
  Node* first;
  Node* last;
};
typedef struct linkedList LinkedList;

LinkedList linkedList;

void addNode(int num) {
  Node* nodePtr = (Node*)malloc(sizeof(Node));
  nodePtr->next = NULL;
  nodePtr->num = num;

  if (linkedList.first == NULL && linkedList.last == NULL) {
    linkedList.first = nodePtr;
    linkedList.last = nodePtr;
  } else {
    linkedList.last->next = nodePtr;
    linkedList.last = nodePtr;
  }
}

void printList() {
  Node* currentPtr = linkedList.first;
  while (currentPtr != NULL) {
    printf("%d\n", currentPtr->num);
    currentPtr = currentPtr->next;
  }
}

int main() {
  addNode(2);
  addNode(4);
  addNode(5);
  addNode(7);

  printList();

  return 0;
}
