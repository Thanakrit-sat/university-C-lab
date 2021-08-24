#include <stdio.h>
#include <stdlib.h>

// กำหนดค่าคงที่ PI มีค่า 22.0/7
//จงเขียนโปรแกรมเพื่อคำนวณค่าปริมาตร (volume) ของทรงกลม ในรูปแบบทศนิยม 2 ตำแหน่ง
#define PI 22.0/7

void main()
{
    float radius = 1.5;
    float volume = (4.0/3) * (22.0/7) * (radius * radius * radius);
    printf("The volume of this sphere is %.2f", volume);
}