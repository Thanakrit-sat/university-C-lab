#include <stdio.h>
#include <string.h>

typedef struct {
    char id[12];
    int score;
}studentRecord;

void init(studentRecord list[], int size){
    strcpy(list[0].id, "55100001");
    strcpy(list[1].id, "55100002");
    strcpy(list[2].id, "55100003");
}

void enterScore(studentRecord list[], int size){
    char position[12];
    int point;
    scanf("%s %d", &position, &point);
    for(int i = 0; i < size; i++){
        if (strstr(list[i].id,position) != '\0'){
            list[i].score = point;
        }
    }
}

void printRecords(studentRecord list[], int size) {
	int i;

	printf("   ID        Score\n");
	for (i = 0; i < size; i++) {
		printf("%s       %d\n", list[i].id, list[i].score);
	}
}

int main() {
	int enter;
	studentRecord list[3];

	init(list, 3);
    enterScore(list, 3);
	printRecords(list, 3);
}