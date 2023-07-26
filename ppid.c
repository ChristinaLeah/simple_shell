#include <stdio.h>
#include <unistd.h>

/**
 * main - PPID
<<<<<<< HEAD
 *
 * Return:  Always 0
 */
int main(void)
{
	pid_t parent_pid;

	parent_pid = getppid();
	printf("%d\n", parent_pid);
=======
 * Return: 0
 */
int main(void)
{
	pid_t my_pid, ppid;

	my_pid = getpid();
	ppid = getppid();
	printf("%u\n", my_pid);
	printf("%u\n", ppid);
>>>>>>> 6c6d3440c0f8acc6bbc76bf1a78b6a0dbbba845d
	return (0);
}
