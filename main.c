#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "song.h"

int main(){

  printf("==========linkedlist functions==========\n");

  printf("testing insert_front \n");
  struct song_node *list0 = NULL;

  printf("first insertion: \n");
  list0 = insert_front(list0,"Yellow Submarine", "The Beatles");
  print_songlist(list0);

  printf("second insertion: \n");
  list0 = insert_front(list0, "Pompeii", "Bastille");
  print_songlist(list0);

  printf("-----------------------\n");

  printf("testing insert_alpha");

  struct song_node *list1;

  printf("first insertion: \n");
  list1 = insert_front(list1,"Yellow Submarine", "The Beatles");
  print_songlist(list1);

  printf("second insertion: \n");
  list1 = insert_front(list1, "Pompeii", "Bastille");
  print_songlist(list1);

  printf("third insertion: \n");
  list1 = insert_alpha(list1, "Party Rock Anthem", "LMFAO");
  print_songlist(list1);

  printf("fourth insertion: \n");
  list1 = insert_alpha(list1, "Strawberry Fields", "The Beatles"); 
  print_songlist(list1);

  printf("fifth insertion: \n");
  list1= insert_alpha(list1, "They Don't Know About Us", "One Direction");
  print_songlist(list1);

  printf("-----------------------\n");

  printf("testing finding first song of artist\n");

  printf("pointing to first song by LMFAO:\n");
  print_songlist(find_first(list1, "LMFAO"));

  printf("pointing to first song by The Beatles:\n ");
  print_songlist(find_first(list1, "The Beatles"));

  printf("potinting to first song by Taylor Swift: \n");
  print_songlist(find_first(list1, "Taylor Swift \n"));

  printf("-----------------------\n");

  printf("testing finding specific song of artist\n");

  printf("finding Strawberry Fields by The Beatles: \n");
  print_songlist(find_one(list1, "Strawberry Fields", "The Beatles"));

  printf("finding Radioactive by Imagine Dragons: \n");
  print_songlist(find_one(list1, "Radioactive", "Imagine Dragons"));

  printf("-----------------------\n");

  printf("testing remove_song \n");

  printf("original list: \n");
  print_songlist(list1);

  printf("removing Party Rock Anthem by LMFAO: \n");
  list1 = remove_song(list1, "Party Rock Anthem");
  print_songlist(list1);

  printf("removing Try by Jay Chou \n");
  list1 = remove_song(list1, "Try");
  print_songlist(list1);

  printf("-----------------------\n");

  printf("testing random_song\n");

  while (i) {
    printf("trial %d: \n", 5-i);
    print_songlist(random_song(list1));
    i--;
  }

  /* printf("free list \n"); */

  /* head = free_list(head); */
  /* print_song(head); */

  return 0;
}
