#include<stdio.h>
int main(){
int n, first = 0, second=1, fibonacci, count=0;

printf("Enter Range of Fibonacci Number: ");
scanf("%d", &n);

while(count<n){

    if(count<=1){
        fibonacci=count;

    }
 else{
        fibonacci =first+second;
    first= second;
    second = fibonacci;

 }
printf("%d", fibonacci);
count++;

}


}
