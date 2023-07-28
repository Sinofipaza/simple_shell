#ifndef SHELL_H
#define _SHELL_H_

#include <stddef.h>
#include <unistd.h>

/**
 * struct list_p - list linked singly
 * @ptr: malloced address
 * @next: points the next node
 */

typedef struct list_p
{
	void *ptr;
	struct list_p *next;
} list_p;

int linum(int add);

char *get_prog_name(char *name);

void my_error(char *command, int status, char *extra);

void signal_handler(int sig);

void main_loop(char *filename);

size_t _list_len(list_t *h);

list_t *_add_node(list_t **head, void *ptr);

list_t *_add_node_end(list_t **head, void *ptr);

void _free_list(list_t *head);

void _free_list_full(list_t *head);

list_t *_get_node_at_index(list_t **head, unsigned int index);

list_t *_insert_node_at_index(list_t **head, unsigned int idx, void *ptr);

int _delete_node_at_index(list_t **head, unsigned int index);

/**
 * struct list_p2 - list linked singly
 * @ptr: string that is malloced
 * @next: point to node coming next
 */

typedef struct list_p2
{
	char *ptr;
	struct list_p2 *next;
} list_p2

size_t list_len(list_t *h);

list_t *add_node(list_t **head, char *ptr);

list_t *add_node_end(list_t **head, char *ptr);

void free_list(list_t *head);

void free_list_full(list_t *head);

list_t *get_node_at_index(list_t *head, unsigned int index);

list_t *insert_node_at_index(list_t **head, unsigned int idx, char *ptr);

int delete_node_at_index(list_t **head, unsigned int index);

char **arrayify(list_t *);

list_t *listify(char **);

void free_double_array(char **);

int _strcmp(char *s1, char *s2);

int _strlen(char *s);

int word_count(char *str, char *delim);

char *_strcat(char *s1, char *s2);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

int sizeof_command(char **tokens);

int _isdigit(int c);

int has_newline(char *input);

void shifbiffer(char *input, int newline_index, int filled);

char *_itoa(int num);

char *_reverse(char *s, char b, int n);

char *_memset(char *s, char b, int n);


void *do_mem(size_t size, void *ptr);

void do_exit(int fd, char *msg, int code);

ssize_t else_handle_input(char *lineptr, int stream, char *input, int filled);

ssize_t _getline(char *lineptr, int stream);

char **_strtok(char * str, char *delim);

char **get_path();

char *get_env_val(char *name);

char *find_path(char **path, char *command);

char **get_env();


char **do_env(char *x, char *y);

char *get_full_command(char *path, char *command);


int setenv_builtin(char **tokens);

int unsetenv_builtin(char **tokens);

int cd_builtin(char **tokens);

int **get_builtins();
