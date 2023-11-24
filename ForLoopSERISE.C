//here even and odd numbers output..
/*
#include<stdio.h>
int main(){

int j, i;
//printf("Enter a even number: ");
//scanf("%d", &j);
for(i=0; i<=100; i++){
        if(i%2==0){
    printf("%d\n", i);
    }
}
return 0;
}
*/

/*

#include<stdio.h>
int main(){

int j, i;
//printf("Enter a even number: ");
//scanf("%d", &j);
for(i=1; i<=100; i++){
        if(i%2!=0){
    printf("%d\n", i);
    }
}
return 0;

}

*/


//here is sum of all even and odd numbers
/*

#include<stdio.h>
int main(){

int n, sum = 0;
printf("Sum of all even numbers(1-100): ");
for(int i=0; i<=100; i++){
        if(i%2==0){
            sum = sum+i;


        }

}
printf("%d", sum);
}

*/
//sum of all odd numbers..
#include<stdio.h>
int main(){

int n, sum = 1;
printf("Sum of all input numbers: ");
scanf("%d", &n);

for(int i=1; i<=100; i++){
        //if(i%2!=0){

            sum = sum*i;


        }
printf("%d", sum);
}


