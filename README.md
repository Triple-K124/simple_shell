Simple Shell ALX Team Project

This project was carried out by kalukalu526@gmail.com (Triple-K124) and brightrobinson.official@gmail.com (Hollybright). 
We collaborated closely to accomplish the goals and objectives of the project. 

The project will be implemented using the C programming language, and the Betty linter will ensure compliance with coding standards.
The project adheres to specific requirements, including compiling all files on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89, and ensuring that all files conclude with a new line.

The Betty style was utilized for checking, employing betty-style.pl and betty-doc.pl.
The project imposes certain coding standards, such as preventing memory leaks in the Shell, limiting the number of functions to no more than 5 per file, and including guards in header files.

This README file contains a description of the project. In this case, the project, "hsh," is described as a simple UNIX command language interpreter that reads commands from either a file or standard input and executes them.

The functionality of hsh involves printing a prompt and waiting for a command from the user.
It creates a child process to check the command, including searching for built-ins, aliases in the PATH, and local executable programs.
The child process is then replaced by the command, which accepts arguments. Upon completion of the command, the program returns to the parent process and prints the prompt again, ready to receive a new command. 
To exit the program, the user can press Ctrl-D or enter "exit" (with or without a status). The described functionality also works in non-interactive mode.
