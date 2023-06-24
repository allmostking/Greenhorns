#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,f,bv,hrd,da,gs,ta;

	clrscr();
	printf("\n\n enter your first value=");
	scanf("%d",&a);
	printf("enter your secound value=");
	scanf("%d",&b);


	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nFirst value after swap is=%d",a);
	printf("\nSecound value after swap is=%d",b);

	printf("\n\nenter value in c=");
	scanf("%d",&c);
	f=(c*9/5)+32;
	printf("value of f after converting is=%d",f);

	printf("\n\nenter your base value");
	scanf("%d",&bv);
	printf("enter HRD");
	scanf("%d",&hrd);
	hrd=bv*hrd/100;
	printf("enter value of da");
	scanf("%d",&da);
	da=bv*da/100;
	printf("enter value of ta");
	scanf("%d",&ta);
	ta=bv*ta/100;
	gs=bv+hrd+da+ta;
	printf("your gross value is %drs",gs);
	getch();
}