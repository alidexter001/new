#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#define BUFFER 1024
extern char **environ;
int split_command(char *str);
int screen(char *str);
void exec(char *args[], char *path);
char *checker(char *arg);
char *_getenvir(char *path);

/* helper functions */
char *_strcatcope(char *dest, const char *src);
char *_strcpy(char *dest, char *src);
size_t _strlen(char *str);
int _strcmp(char *s1, char *s2);
char *_strchr(char *s, char c);
char *chelper(char *path[], int num_path, char *args);
#endif
