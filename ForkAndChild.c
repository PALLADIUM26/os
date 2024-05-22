#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include <conio.h>

int main()
 {
    pid_t pid;

    // Create a child process
    pid = fork();

    if (pid < 0)
 {
        fprintf (stderr, "Fork failed.\n");
        return 1;
    } 
else if (pid == 0) 
{
        // This code is executed by the child process
        printf("\nChild process:\n");
        printf("Process ID: %d\n", getpid());
        printf("Parent Process ID: %d\n", getppid());
    }
 else 
{
        // This code is executed by the parent process
        printf("\nParent process:\n");
        printf("Process ID: %d\n", getpid());
        printf("Parent Process ID: %d\n", getppid());
    }
    //getch();
    return 0;
}

/*
Output:- 
Parent process:
Process ID: 1234  
Parent Process ID: 567

Child process:
Process ID: 1235 
Parent Process ID: 1234 
*/
