#include <stdio.h>
#include <stdlib.h>
#include "linked_list.c"

int main(){
  struct node fr;
  struct node gg;
  fr.i = 5;
  fr.next = *(gg);
  gg.i = 6;
  print_list(*(fr));
}
