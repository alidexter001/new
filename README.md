## main.c file:

contains the loop prompt of the $ sign and read the standard imput on the commmand line
then if the ctrl+D (EOF) is declared the loop is terminated and the shell exits
if the CLI in prompted with an empty line then the shell restarts the loop
if the CLI in prompted with "exit" then the loop is terminated and the shell exits
else if the CLI is prompted with a command or directory then this line is sent to the screen function 


## screen.c file:

get a string as an argument (from the main function), 
use the strtok function to break that string with a space delimiter (breaks the string into an array of words that were delimited by space in the string);
then checks the 1st element on the array (p[0]) if it is an available file/path in the environment if it is accessible and/or executable
if the check is false, then the function returns an error the the stdout
if the check is true, (file/path available and executable) then this function sends the array p to the exec function

## exec.c file:
takes an array (of arguments) from the screen function,
forks the process and :
check if the forking process succeeded :
** check failed ** = prints an error message and exits the function with a failure_exit status
** check succeeded ** 
the child process execute the file arguments using the path given and any additiona arguments available
the parent process awaits for the status of the child process and print a message to the stdout with the status of the result of the process.


## checker.c file:

checks the first argument on the stdin and with the PATH env list to try to find of that argument is available in the PATH file else return a Perror file/directory not found