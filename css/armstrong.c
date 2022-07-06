#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,rem,arm,temp;
arm=0;
printf("Enter a number\n");
scanf("%d",&n);
for(temp=n;n!=0;n=n/10){
   rem=n%10;

   arm= arm+pow(rem,3);
   printf("%d",arm);
}
if(temp==arm){
    printf("Number is an Armstrong Number");
}
else{
    printf("Number is not Armstrong Number");
}
    getch();
    return 0;
}