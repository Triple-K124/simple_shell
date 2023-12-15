#ifndef SHELL_HEADER
#define SHELL_HEADER
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <stdarg.h>
#include <ctype.h>

/* Macros */
#define PATH_MAX_LENGTH 4096
#define PATH_SEPARATOR ":"
#define PROMPT "$ "
#define MAX_TOKENS 1024
#define BUFFER_SIZE 1024

/* prompt_utils.c */
void prompter(void);

/* input_getter.c */
char *input_getter(void);
void free_old_input(void);

/* builtin functions */
int builtin_checker(char **args);

void help_shell(void);
void exit_shell(char **args);
void cd_shell(char **args);
int setenv_shell(char **args);
int unsetenv_shell(char **args);
int env_shell(void);
int clear_shell(char **args);
void echo_shell(char **args);

/* handler_signal.c */
void handle_interrupt_signal(int sig);
void handle_quit_signal(int sig);
void handle_stop_signal(int sig);

/* executor.c */
int executor(char **arg);

/* parse.c */
char **tokenizer(char *str, const char *delimeter);
char **tokenize_user_input(char *user_input);

/* getter_of_env.c */
char *_getter_of_env(const char *name);

/* path_getter.c */
char *path_getter(void);

/* path_finder.c */
char *path_finder(char *cmd);

/* free_mem.c */
void free_error(char **arg_value, char *arg);
void free_array_tokens(char **pointer);
void path_releaser(void);

/** error_handler.c */
void _puts(char *string);
void _puterror(char *error);

/** utility_functions1.c */
int _strlen(const char *string);
int _strcmp(const char *string1, const char *string2);
int _strncmp(const char *string1, const char *string2, size_t n);

/** utility_functions2.c */
char *_strcpy(char *destination, char *sorce);
char *_strcat(char *destination, const char *source);
char *_strdup(const char *string);
int _putchar(char c);

/** utility_functions3.c */
int _atoi(const char *string);
char *_memset(char *area, char byte, unsigned int n);

#endif

