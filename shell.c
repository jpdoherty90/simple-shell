#include <stdio.h>
#define MAXINPUT 100

int main()
{
	int c;
	char arr[MAXINPUT];
	int i = 0;

	printf("λ ");
	while (1) {
		c = getchar();
		if (c == EOF) {
			break;
		} else if (c == '\n') {
			arr[i] = '\0';
			i = 0;
			printf("%s\nλ ", arr);
		} else {
			arr[i++] = c;
		}
		
	}

	return 0;
}