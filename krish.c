#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
scanf("%d",&i);

if(i>0)
    printf("positive");
else if(i==0)
    printf("zero");
else
    printf("negative");
    
getch();
}
