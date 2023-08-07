#ifndef _FILE_IO_
#define _FILE_IO_

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);

int _strlen(char *s);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

void copy_file(const char *src, const char *dest);

#endif
