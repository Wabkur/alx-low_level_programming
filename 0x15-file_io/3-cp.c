#include "main.h"

/**
 * main - .
 * @argv: .
 * @argv: .
 *
 * Return: Always (success)
 */

int main(int argc, char *argv[])
{
	int wab, kur, m, t, a;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	wab = open(argv[1], O_RDONLY);
	if (wab < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	kur = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((m = read(wab, buffer, BUFSIZ)) > 0)
	{
		if (wab < 0 || write(kur, buffer, m) != m)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			close(wab);
			exit(99);
		}
	}
	if (m < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	t = close(wab);
	a = close(kur);
	if (t < 0 || a < 0)
	{
		if (t < 0)
			dprintf(STDERR_FILENO, "Error: can't close fd %d\n", wab);
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: can't close fd %d\n", kur);
		exit(100);
	}

	return (0);
}
