#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next;};


void print_list(struct node * n){
  while(n->next != 0){
    printf("%d\n", n->i);
    n = n->next;
  }
  printf("%d\n", n->i);
}

int main(){
  struct node fr;
  struct node gg;
  fr.i = 5;
  fr.next = & gg;
  gg.i = 6;
  gg.next = NULL;
  print_list(& fr);
}
