#include<stdio.h>
 
int main()
{   
    int num1,num2,num3;
    printf(" Enter number [1] : ");
    scanf("%d", &num1);
    printf(" Enter number [2] : ");
    scanf("%d", &num2);
    printf(" Enter number [3] : ");
    scanf("%d", &num3);

    if((num1>num2)&& (num1>num3))
        {
          printf("Maximum is %d",num1);
    }else if((num2>num1)&& (num2>num3))
        {
          printf("Maximum is %d",num2);
    }else if((num3>num1) && (num3>num2))
        {
          printf("Maximum is %d",num3);
    }else if((num1=num2)&&(num1>num3))
        {
          printf("Maximum is %d",num1);
	}else if((num1=num3)&&(num1>num2))
        {
          printf("Maximum is %d",num1);
	}else if((num2=num3)&&(num2>num1))
        {
          printf("Maximum is %d",num2);
	}else if(num1=num2=num3)
        {
          printf("Maximum is %d",num1);
      }
    return 0;
}
