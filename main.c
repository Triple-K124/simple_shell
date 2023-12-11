#include "shell.h"

/**
 * main - This implements a simple shell
 *
 * Return: EXIT_SUCCESS.
 */
int main(void)
{
	char *user_input;
	char **command_args;
	int execution_status;

	/* Signal handlers */
	signal(SIGINT, handle_interrupt_signal);
	signal(SIGQUIT, handle_quit_signal);
	signal(SIGTSTP, handle_stop_signal);

	do {
		user_input = input_getter();
		if (!user_input || !*user_input) /* End of File seen, exit */
			break;

		command_args = tokenize_user_input(user_input);
		if (!command_args || !*command_args)
		{
			free(user_input);
			free_array_tokens(command_args);
			continue;
		}
		execution_status = executor(command_args);
		free(user_input);
		free_array_tokens(command_args);

		/* Set the execution_status to 1 to continue the loop */
		execution_status = 1;
	} while (execution_status);

	return (EXIT_SUCCESS);
}
