#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
void
linkedListTraversal (struct node *ptr)
{
  while (ptr != NULL)
    {
      printf ("Element: %d\n", ptr->data);
      ptr = ptr->next;
    }
}

int
main ()
{//creating nodes
  struct node *head;
  struct node *second;
  struct node *third; 
  //dynamic memory allocation from heap 
  head=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));
  head->data = 1;
  head->next = second;
  second->data = 2;
  second->next = third;
  third->data = 4;
  third->next = NULL;
  linkedListTraversal (head);

  return 0;
}
