#include <stdio.h>
//จงเขียนโปรแกรมเพื่อแสดงผลเวลาที่เครื่องคอมพิวเตอร์ทำงานในรูปของจำนวนวัน ชั่วโมง และนาที ตามลำดับ (ไม่ต้องคำนึง)เมื่อตัวแปร computer_time = 785
void main()
{
    int computer_time = 785;
    int day = computer_time/1440;
    int hour = (computer_time/60) % 24;
    int minute = computer_time%60;
    printf("It is %u days %u hours and %d minutes.",day, hour, minute);
}