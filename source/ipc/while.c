
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int index = 0;
	while (1) {
		printf("%d\n", index);
		index += 1;
		sleep(1);
	}
}
