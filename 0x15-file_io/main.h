#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void check_arg(int argc);
void check_file(ssize_t check, const char *filename, int fd_from, int fd_to);
void check_fileCreated(ssize_t check, const char *filename, int fd_from, int fd_to);
void check_fd(int check, int file_d);
#endif
