#include <stdio.h>

double findAverage(char *filename)
{
    FILE *totalscore;
    float sum = 0, score, count = 0;
    totalscore = fopen(filename, "r");
    if (totalscore != NULL){
        while (!feof(totalscore)){
            fscanf(totalscore, "%f\n", &score);
            sum += score;
            count++;
        }
        fclose(totalscore);
    }
    return sum/count;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}