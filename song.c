#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "song.h"

void print_song(struct song_node  *target){
  struct song_node *current = target;
  while (current){
    printf("song: %s by %s \n", current->name, current->artist);
    current = current->next;
  }
  printf("[end] \n");
}

struct song_node * insert_front(struct song_node *list, char *song, char *musician){
  struct song_node *new = malloc(sizeof(struct song_node));
  strcpy(new->name, song);
  strcpy(new->artist, musician);
  new->next = list;
  return new;
}

struct song_node * insert_alpha(struct song_node *list, char *song, char *musician) {
  /* struct song_node *old = list; */
  /* while (list){ */
  /*   if (strcmp(list->next->artist, musician) > 0) */
  /*     break; */
  /*   else if (strcmp(musician, list->artist) == 0) */
  /*     while(list) { */
  /* 	if (strcmp(song, list->name) < 0) */
  /* 	  break; */
  /* 	list = list->next; */
  /*     } */

  /*   else {list = list->next;} */
  /* } */
  /* struct song_node *new = insert_front(list->next, song, musician); */
  /* list->next = new; */
  /* return old; */

  if (strcmp(musician, list->artist) < 0)
    return insert_front(list, song, artist);
  while(list) {
    struct song_node *temp = list->next;
    if(strcmp(musician, temp->artist) < 0){
      list->next = insert_front(list->next, song, musician);
      return list;
    }
}



struct song_node *free_list(struct song_node *list) {
  struct song_node *current = list;
  while (current){
    current = list->next;
    free(list);
    list = current;
  }
  return list;
}
