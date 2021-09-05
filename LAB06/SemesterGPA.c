#include <stdio.h>
#include <stdlib.h>

void main(){
    char n_str[15], cg[10], grade;
    int n, i, credit, gradeTotal = 0, creditTotal = 0;
    float gpa;

    printf("Enter number of subject(s): ");
    fgets(n_str, 15, stdin);

    n = atoi(n_str);
    for (i = 1; i <= n; i++){
        printf("Enter credit,grade for subject #%d: ", i);
        fgets(cg, 10, stdin);

        credit = cg[0] - '0';
        grade = cg[2];
        creditTotal += credit;

        if (grade == 'a' || grade == 'A')
            gradeTotal += 4 * credit;
        else if (grade == 'b' || grade == 'B')
            gradeTotal += 3 * credit;
        else if (grade == 'c' || grade == 'C')
            gradeTotal += 2 * credit;
        else if (grade == 'd' || grade == 'D')
            gradeTotal += credit;
    }
    
    gpa = (float) gradeTotal / creditTotal;
    printf("GPA = %.2f\n", gpa);
}