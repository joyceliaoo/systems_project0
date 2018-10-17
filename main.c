#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "song.h"

int main(){
  /* struct song_node *head; */
  /* head = insert_front(head, "Yellow Submarine", "The Beatles"); */

  /* printf("first insertion: \n"); */
  /* print_song(head); */

  /* head = insert_front(head, "Pompeii", "Bastille"); */

  /* printf("second insertion: \n"); */
  /* print_song(head); */

  struct song_node *list2;

  list2 = insert_alpha(list2,"Yellow Submarine", "The Beatles");

  printf("first insertion: \n");
  print_song(list2);

  list2 = insert_alpha(list2, "Pompeii", "Bastille");

  printf("second insertion: \n");
  print_song(list2);

  list2 = insert_alpha(list2, "Party Rock Anthem", "LMFAO");

  /* list2 = insert_alpha(list2, "Strawberry Fields", "The Beatles"); */
  print_song(list2);
  

  /* printf("free list \n"); */

  /* head = free_list(head); */
  /* print_song(head); */

  return 0;
}
