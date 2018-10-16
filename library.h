#ifndef LIBRARY_H
#define LIBRARY_H

void add_song(char *song, char *musician);
struct song_node *search_song(char *song, char *musician);
struct song_node *search_artist(char *musician);
void print_alpha(char letter);
void print_artist(char *musician);
void print_all();
void shuffle();

#endif
