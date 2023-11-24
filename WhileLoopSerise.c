//somantor dhara
//1+2+3+4+.....+n=sum
//sum of some numbers..

/*
#include<stdio.h>
int main(){

int n, i = 0, sum = 0, a = 2;

printf("Enter the last number: ");
scanf("%d", &n);

printf(" 2+...+%d", n);

while(a<=n)
 {
     sum= sum+a;
     a = a+2;
}

printf(" = %d", sum);

 }
*/

 //gonnotor dhara
 //1*2 + 2*3 + 3*4 + .... + n1*n2
/*

 #include<stdio.h>
 int main(){

int sum=0, n1, n2, a=1, b=2;
printf("Enter two number: ");
scanf("%d %d", &n1, &n2);
printf("1*1 + 2*2 + 3*3 + .... + %d*%d ", n1, n1);

while(a<=n1 && b<=n2)
    {

    sum = sum + a*a;
    a = a+1;
    //b = b+1;
}
 printf("= %d",  sum);
getch();

}

*/

#include<stdio.h>
int main(void){
    double sum = 0, n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    //printf("1 + 1/2 + 1/3 + ....1/%d = ", num1);

    for(i=1; i<=n; i++){
       sum = sum+(1/i);

       if(i==1){
        printf("\n1 + ");
       }

       else if(i==n){
        printf("(1/%lf) + ", i);
       }

       else{
        printf("(1/%lf) + ", i);
       }

    }
    printf(" = %lf", i);
    return 0;
}
