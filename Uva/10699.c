#include<stdio.h>
#include<math.h>

int main(){

    int N, i, j, isPrime, n,count;

    printf("To print all prime numbers between 1 to N\n");
    scanf("%d",&N);

    printf("Prime numbers between %d to %d\n", 1, N);

    for(i = 2; i <= N; i++){
        isPrime = 0;

        for(j = 2; j <= sqrt(N); j++){
             if(i % j == 0){
                 isPrime = 1;
                 break;
             }
        }

        if(isPrime==0 && N!= 1)
            printf("%d\n",i);
    }
   return 0;
}
