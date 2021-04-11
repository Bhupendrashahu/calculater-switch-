#include <stdio.h>
#include <stdlib.h>

  void main()
{
 int no,a,b,c,d,e,g;
  printf("enter the fFIRST NO for opration\n");
   scanf("%d",&a);
    printf("enter the SECAND NO for opration\n");
    scanf("%d",&b);
  printf("enter the no for addition =1\n");
 printf("enter the no for subtraction =2\n");
 printf("enter the no for division  =3\n");
 printf("enter the no for multiple =4\n");
scanf("%d",&no);
 c=a+b;
 d=a-b;
 e=a/b;
 g=a*b;
 printf("\n  u enter for the OPRATION key is =%d",no);
printf("\n ");
 switch(no)
 {
 case 1:
    printf("\n your ans for ADDITION is ==%d",c);
    break;
    case 2:
    printf("\n your  ans for SUBSTRACTS is ==%d",d);
    break;
    case 3:
    printf("\n your ans for DIVISION is ==%d",e);
    break;
    case 4:
    printf("\n your ans for MULTIPICATION is ==%d",g);
    break;
    default:
    printf("\n default is ");
    break;
 }
 getch();
}
