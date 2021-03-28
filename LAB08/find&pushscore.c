#include <stdio.h>

typedef struct{
    char ID[12];
    int midterm;
    int final;
    char grade;
}studentGrade; 

void calculateGrade(int m, int f, int i, studentGrade *student){
    if(m+f >= 80){
        student[i].grade = 'A';
    }else if (m+f >= 70 && m+f < 80){
        student[i].grade = 'B';
    }else if (m+f >= 60 && m+f < 70){
        student[i].grade = 'C';
    }else if (m+f >= 50 && m+f < 60){
        student[i].grade = 'D';
    }else{
        student[i].grade = 'F';
    }
}

int main()
{
    studentGrade student[5];
    for (int i = 0; i < 5; i++){
        printf("Enter Student ID: ");
        scanf("%s", student[i].ID);
        printf("Enter Student Midterm: ");
        scanf("%d", &student[i].midterm);
        printf("Enter Student Final: ");
        scanf("%d", &student[i].final);
        calculateGrade(student[i].midterm, student[i].final, i, student);
    }
    for (int j = 0; j < 5; j++){
        printf("Student ID %s receives grade %c.", student[j].ID, student[j].grade);
        if (j != 4){
            printf("\n");
        }
    }
}