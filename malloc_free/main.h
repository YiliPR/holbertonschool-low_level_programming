#ifndef FILE_MAIN
#define FILE_MAIN

char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
