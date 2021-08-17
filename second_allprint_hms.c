// Convert Total Seconds Into Hours,Minutes And Remaining Seconds

#include<stdio.h>
#include<conio.h>
void main()
{
	int ts,h=0,m=0,s;
	clrscr();
	printf("Enter total sec : ");
	scanf("%d",&ts);
	while(ts>=60)
	{
	      m++;
printf ("mm: %d\n",m);
	      while(m>=60)
	      {
	 	     h++;
printf ("hh: %d\n",h);
	      	     m=m-60;
	      }
	      ts=ts-60;
printf ("ss: %d\n",ts);
	}
	printf("\nHH:MM:SS = %d:%d:%d",h,m,ts);
	getch();
}




	