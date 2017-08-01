#include<stdio.h>
#include<string.h>
struct dist
{
	int km;
	int m;
} a,b;
void read()
{
	printf("Enter distance in kilometers");
	scanf("%d",&a.km);
	printf("Enter distance in meters");
	scanf("%d",&a.m);
	printf("Enter distance in kilometers");
	scanf("%d",&b.km);
	printf("Enter distance in meters");
	scanf("%d",&b.m);
}
void display()
{
	printf("The distance is %d km and %d m\n",a.km,a.m);
	printf("The distance is %d km and %d m\n",b.km,b.m);
}

void add()
{
	int c, d;
	c=a.km+b.km;
	d=a.m+b.m;
	if(d>=1000)
	{
		d=d-1000;
		c++;
	}
	printf("Sum is %d.%d\n",c,d);
}
void subtract()
{
	int c, d;
	c=a.km-b.km;
	d=a.m-b.m;
	if(c<0)
	printf("Not possible to calculate\n");
		printf("Sum is %d.%d\n",c,d);
}


int main()
{
struct dist a,b;
	read(); display();
 add();
subtract();
}




