#include <stdio.h>

typedef struct {
	int ID;
	char Title[51];
	char Writer[51];
} Book;

int main(void) {
	Book Books[3];

	for(int i = 0; i < 3; i++) {
		printf("ID for new book : ");
		scanf("%d", &Books[i].ID);
		printf("Title : ");
		scanf("%s", Books[i].Title);
		printf("Writer : ");
		scanf("%s", Books[i].Writer);
	}

	for(int i = 0; i < 3; i++) {
		printf("Books[%d] => {ID : %d, Title : \"%s\", Writer : \"%s\"}\n", i, Books[i].ID, Books[i].Title, Books[i].Writer);
	}	

	return 0;
}
