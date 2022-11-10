#include "mylib.h"

char* ids[MAX_MEMBERS];
char* passwds[MAX_MEMBERS];
char* books[MAX_BOOKS];
char* cur_user;

void init_lib() {
	printf("[*] Initializing my library.\n");
	memset(ids, NULL, sizeof(*(&ids)));
	memset(passwds, NULL, sizeof(*(& passwds)));
	memset(books, NULL, sizeof(*(& books)));

	ids[0] = "korea";
	passwds[0] = "korea";

	ids[1] = "university";
	passwds[1] = "university";

	cur_user = NULL;
}

int login() {
	char id[MAX_ARRAY];
	char pw[MAX_ARRAY];

	memset(id, 0, MAX_ARRAY);
	memset(pw, 0, MAX_ARRAY);

	printf("[*] login\n");
	printf("- ID: ");
	fgets(id, MAX_ARRAY, stdin);
	printf("- PW: ");
	fgets(pw, MAX_ARRAY, stdin);

	id[strlen(id) - 1] = '\0';
	pw[strlen(pw) - 1] = '\0';

	printf("%s\n", id);
	printf("%s\n", pw);

	return TRUE;
}