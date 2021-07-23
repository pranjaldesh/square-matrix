#include<stdio.h>
#include<conio.h>
#define MAX_ROWS 3
#define MAX_COLS 4
void print_square(int[]);
void main()
{
	int r;
	int a[MAX_ROWS][MAX_COLS]={{1,2,3,4},{5,6,7,8},{1,3,5,8}};
	for(r=0;r<MAX_ROWS;r++)
		print_square(a[r]);
}
void print_square(int x[])
{
	int c;
	for(c=0;c<MAX_COLS;c++)
		printf("%d\t",x[c]*x[c]);
		printf("\n");
		getch();
}
