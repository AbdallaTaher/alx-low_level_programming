#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Entry
 * function for printing without using printf
 * Return: Always 0 (Success)
 */

int main(void)
{
	const char mg;

	mg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	syscall(SYS_write, 1, mg, sizeof(mg));

	return (1);
}
