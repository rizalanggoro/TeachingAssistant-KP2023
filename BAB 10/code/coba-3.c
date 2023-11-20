// menambahkan, iterasi, dan hapus item pada linked list

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

  printf("data: ");
  while (currentPtr != NULL) {
    printf(" %d", currentPtr->data);

    // mengubah pointer saat ini menjadi -> pointer saat ini . next
    currentPtr = currentPtr->next;
  }
  puts("");
}

void deleteFirst() {
  printf("delete first node...\n");
  // menyimpan node pertama ke temporary
  Node *temp = firstPtr;

  // mengubah alamat pertama menjadi alamat pertama + 1
  firstPtr = temp->next;

  // hapus node pertama yg sebelumnya
  free(temp);
}

void deleteLast() {
  printf("delete last node...\n");

  Node *prevPtr = NULL;
  Node *currentPtr = firstPtr;
  while (currentPtr != lastPtr) {
    prevPtr = currentPtr;
    currentPtr = currentPtr->next;
  }

  prevPtr->next = NULL;
  lastPtr = prevPtr;

  free(currentPtr);
}

void deleteByData(int data) {
  printf("delete by data: %d...\n", data);

  Node *prevPtr = NULL;
  Node *currentPtr = firstPtr;
  int found = -1;

  while (currentPtr != NULL) {
    if (currentPtr->data == data) {
      found = 1;
      break;
    }
    prevPtr = currentPtr;
    currentPtr = currentPtr->next;
  }

  if (found == 1) {
    printf("data ditemukan!\n");
    prevPtr->next = currentPtr->next;
    free(currentPtr);
  } else {
    printf("data tidak ditemukan!\n");
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

  deleteFirst();
  printLinkedList();

  deleteLast();
  printLinkedList();

  deleteByData(4);
  printLinkedList();

  deleteByData(9);
  printLinkedList();

  return 0;
}
