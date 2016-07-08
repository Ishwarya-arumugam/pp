#include<stdio.h>
#include<conio.h>
void main()
{
char a,b;
scanf("%c %c",&a,&b);
if(a>b)
{
printf("%c is greatest",a);
}
else if(b>a)
{
printf("%c is greatest",b);
}
else
{
printf("Both are equal");
}
getch();
}
