#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "song.h"
#include "library.h"

struct song_node *lib[27];

int get_index(char *musician) {
	char temp[100];
	strcpy(temp, musician);
	int i = temp[0] - 'A';
	if (i<0 || i>26) return 27;
	return i;
}

void add_song(char *song, char *musician){
	int i = get_index(musician);
	lib[i] = insert_alpha(lib[i], song, musician);
}

struct song_node *search_song(char *song, char *musician) {
	int i = get_index(musician);
	return find_one(lib[i], song, musician);
}

struct song_node *search_artist(char *musician) {
	int i = get_index(musician);
	return find_first(lib[i], musician);
}

void print_alpha(char letter) {
	int i = get_index(&letter);
	//printf("%d \n", i);
	print_songlist(lib[i]);
}

void print_artist(char *musician){}

void print_all() {
	printf("=====\n");
	for (int i = 0; i<=27; i++) {
		if (lib[i]) {
			printf("%c list: \n", 'A'+i);
			print_alpha('A'+i);
		}
	}
	printf("=====\n");
}
