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
  while (list){
    if (strcmp(musician, list->artist) == 0)
      while(list) {
	if (strcmp
      break;
    list = list->next;
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
