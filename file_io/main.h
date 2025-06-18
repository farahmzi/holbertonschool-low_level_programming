#ifndef MAIN_H
#define MAIN_H

/* Includes */
#include <stddef.h>  /* For NULL */
#include <stdio.h>   /* Optional: if needed for testing */

/* Prototype */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif /* MAIN_H */

