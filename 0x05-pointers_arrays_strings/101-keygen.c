#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

char *generate_password(void) {
	static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char *password = malloc(PASSWORD_LENGTH + 1);

	srand(time(NULL));
	for (int i = 0; i < PASSWORD_LENGTH; i++) {
		int index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	}

	password[PASSWORD_LENGTH] = '\0';
	return (password);
}

int main(void) {
	char *password = generate_password();
	printf("%s\n", password);
	free(password);
	return (0);
}
