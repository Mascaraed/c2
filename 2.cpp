#include <stdio.h>
main()
{
	float X,Y;
	scanf("%f",&X);
	if(-5<=X&&X<0&&X!=-2) Y=1/(X+2);
	if(0<=X&&X<5) Y=1/(X+5);
	if(5<=X&&X<10) Y=1/(X+12);
	if(X<-5||X>=10||X==-2) Y=0;
	printf("%f",Y);
}
