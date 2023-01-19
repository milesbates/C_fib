#include <stdio.h>

int fib(int inp){
    int num;
    int num2;
    int sub;
    int rv;
    num=0;  
    num2=1;
    sub=0; 
    rv=0;
    for(int i=1; i<inp; i++){
        sub = num;
        num = num+num2;
        num2 = sub;
        rv = num+rv;
    }
    printf("%d",rv+1);
  return 0;
}

int main(void){
    for(int i = 0; i<20; i++){
      fib(i);
      printf("\n");
    }
}
