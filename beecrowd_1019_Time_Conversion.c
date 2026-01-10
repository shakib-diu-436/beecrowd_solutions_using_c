#include <stdio.h>
int main()
{
 int secounds;
 scanf("%d",&secounds);

 int hour = secounds / 3600;
 secounds = secounds - (hour * 3600);

 int minutes = secounds / 60;
 secounds = secounds - (minutes * 60);

 printf("%d:%d:%d\n", hour, minutes, secounds);
    
 return 0;
}
