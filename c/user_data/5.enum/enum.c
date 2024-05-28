#include <stdio.h>
#include <limits.h>

/* enum la mot tap hop cac gia tri co the co cua 1 thuoc tinh*/
/* ung dung: tao ra cac ma loi co the say ra  */
typedef enum {
   ERROL_PRARAMETER = 0U,
   ERROL_OVERLOAD,
   ERROL_DIVIDE_TO_0,
   NO_ERROL
}Funct_Status_e;


Funct_Status_e caculate(int s1, int s2, char pt){
   switch (pt)
   {
   case '+':
      printf("%d + %d = %d",s1,s2,s1+s2);
      break;
   case '-':
      printf("%d - %d = %d",s1,s2,s1-s2);
      break;
   case '*':
      printf("%d * %d = %d",s1,s2,s1*s2);
      break;
   case '/':
      if(s2 == 0) return ERROL_DIVIDE_TO_0;
      printf("%d / %d = %d",s1,s2,s1/s2);
      break;
   case '^':
      if(pow(s1,s2) > INT_MAX) return ERROL_OVERLOAD;
      printf("%d ^ %d = %d",s1,s2,pow(s1,s2));
      break;
   case '%':
      printf("%d \% %d = %d",s1,s2,s1%s2);
      break;
   default:
      return ERROL_PRARAMETER;
      
   }
   return NO_ERROL;
}

int main()
{  
   // co the su dung cac enum khi ko can khai bao
   int funct = ERROL_PRARAMETER;

   caculate(15,2,'%');
   return 0;
}