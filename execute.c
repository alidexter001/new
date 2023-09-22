#include "main.h"

/**
 * exec - take in array of args and path, fork the process and execute
 * @args: array of arguments
 * @path: a valid path
 * Return: nothing if the process is done or error otherwise
 */

void exec(char *args[], char *path)
{
	pid_t child_pid;
	int status;
	int stderr_cpy;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("failed to fork process");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		stderr_cpy = dup(STDERR_FILENO);
		close(STDERR_FILENO);
		open("/dev/null", O_WRONLY);
		if (execve(path, args, NULL) == -1)
		{
			close(STDERR_FILENO);
			dup2(stderr_cpy, STDERR_FILENO);
			close(stderr_cpy);
			perror("failed to execute proccess");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(child_pid, &status, 0);
		if (!WIFEXITED(status))
		{
			perror("child exit wrong");
		}
	}
}
