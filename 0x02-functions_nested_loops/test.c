#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#include <sys/syscall.h>
#include <fcntl.h>

int main(void)
{
	fprintf(1,"holberton");
	printf("O_WRONLY: %i\n", 3&2);

	return (0);
}
