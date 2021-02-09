#include <stdio.h>
//เขียนโปรแกรมเพื่อหาจำนวนเกรดเฉลี่ยที่ต้องทำในเทอมนี้ เพื่อให้ได้เกรดเฉลี่ยรวมที่ต้องการ
//โดยตัวแปรเก็บค่าต่าง ๆ ดังนี้
//preGrade เก็บค่า เกรดเฉลี่ยสะสมที่ผ่านมา
//preCredit เก็บค่า หน่วยกิตสะสมที่คำนวณเกรดเฉลี่ยแล้ว
//credit เก็บค่า หน่วยกิตของเทอมนี้
//requiredGrade เก็บค่า เกรดเฉลี่ยรวมที่ต้องการ
void main()
{
    
float preGrade = 1.75;    
int preCredit = 21;    
int credit = 18;    
float requiredGrade = 2.00;

float grade1 = requiredGrade * (preCredit + credit);
float grade2 = preGrade * preCredit;
float regrade = grade1 - grade2;
float GPA = regrade/credit;
printf("The GPA this semester should be %.2f", GPA);

}