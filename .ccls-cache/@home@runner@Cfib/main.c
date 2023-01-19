int main(void){
    printf(fib(10));
}

int fib(int inp){
    int num=0;
    int num2=1;
    int sub=0;
    int rv=0;
    for(int i=0; i<inp; i++){
        sub = num;
        num = num+num2;
        num2 = sub;
        rv = num+rv;
    }
    printf("%d",rv);
}
