#include <stdio.h>
#include <stdlib.h>
#include "linked_list.c"


int main(){
  struct node * gg = insert_front(NULL, 6);
  struct node * fr = insert_front(gg, 5);
  print_list(fr);
  free_list(fr);
  print_list(fr);
}
