#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "song.h"

int main(){
  struct song_node *head;
  head = insert_front(head, "Yellow Submarine", "The Beatles");

  printf("first insertion: \n");
  print_song(head);

  head = insert_front(head, "Pompeii", "Bastille");

  printf("second insertion: \n");
  print_song(head);

  printf("free list \n");

  head = free_list(head);
  print_song(head);

  return 0;
}
