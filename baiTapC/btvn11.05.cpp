#include <stdio.h>
int main()
{
 int r, s, c;
 float PI = 3.14;
 printf("Nhap ban kinh r: ");
 scanf("%d", &r);
 c = r * 2 * PI;
 s = r*r*PI;
 printf("Chu vi va dien tich cua hinh tron lan luot la %d va %d", c, s);
 return 0;
}
