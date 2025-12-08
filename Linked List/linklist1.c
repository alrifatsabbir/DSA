#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
};
void deleteStart (struct Node **head){
  struct Node *temp = *head;
  if (*head == NULL)
    {
      printf ("Linked List Empty, nothing to delete");
      return;
    }
  *head = (*head)->next;
  printf ("\n%d deleted\n", temp->data);
  free (temp);
}

void insertStart (struct Node **head, int data){
 	struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
  	newNode->data = data;
  	newNode->next = *head;
  	*head = newNode;
  	printf ("\n%d Inserted\n", newNode->data);
}
void display (struct Node *node){
  printf ("\nLinked List: ");
  while (node != NULL)
    {
      printf ("%d ", node->data);
      node = node->next;
    }
  printf ("\n");
}
int main (){
  struct Node *head = NULL;
  insertStart (&head, 100);
  insertStart (&head, 80);
  insertStart (&head, 60);
  insertStart (&head, 40);
  insertStart (&head, 20);
  display (head);
  deleteStart (&head);
  deleteStart (&head);
  display (head);

  return 0;
}