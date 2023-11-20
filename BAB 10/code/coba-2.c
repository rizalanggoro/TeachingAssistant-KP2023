// menambahkan dan iterasi item pada linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
  // data
  int data;

  // merujuk ke alamat berikutnya
  struct node *next;
};

// alias
typedef struct node Node;

// variabel untuk menyimpan alamat node pertama dan terakhir
Node *firstPtr;
Node *lastPtr;

void insertNode(int data) {
  // bikin sebuah node
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (firstPtr == NULL && lastPtr == NULL) {
    // menambahkan node untuk pertama kali
    firstPtr = newNode;
    lastPtr = newNode;
  } else {
    // bukan menambahkan untuk pertama kali
    lastPtr->next = newNode;
    lastPtr = newNode;
  }
}

void printLinkedList() {
  // mengambil alamat pointer pertama
  Node *currentPtr = firstPtr;

  while (currentPtr != NULL) {
    printf("data: %d\n", currentPtr->data);

    // mengubah pointer saat ini menjadi -> pointer saat ini . next
    currentPtr = currentPtr->next;
  }
}

int main() {
  insertNode(1);
  insertNode(2);
  insertNode(3);
  insertNode(4);
  insertNode(5);
  insertNode(6);

  printLinkedList();

  return 0;
}
