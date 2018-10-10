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

struct node * insert_front(struct node * n, int x){
  struct node *ans = malloc(10);
  ans->i = x;
  ans->next = n;
  return ans;
}



int main(){
  struct node * gg = insert_front(NULL, 6);
  struct node * fr = insert_front(gg, 5);
  print_list(fr);
}
