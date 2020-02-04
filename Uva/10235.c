#include<stdio.h>
#include<math.h>
int  long is_prime(int long n);
int long  reverse (int  long n);
int main()
{
      int long  n,rev=0,tmp=0;
      while(scanf("%ld",&n)==1){
      if(n==is_prime(n)){
            tmp=reverse(n);
            if(tmp==is_prime(tmp)){
                  if(tmp==n)
                  printf("%ld is prime.\n",n);
                  else
                  printf("%ld is emirp\n",n);
            }
                  else
                  printf("%ld is prime.\n",n);
      }
      else
      {
            printf("%d is not prime.\n",n);
      }
}
return 0;
}
int long  is_prime(int long  n)
{
      int  long i,count=1,tmp,root;
      root=sqrt(n);
      for(i=2;i<=root;i++){
            if(n%i==0){
                  count=0;
                  break;
            }
      }
      if(count==1)
      return n;
}
int long  reverse(int long  n)
{
      int tmp,rev=0,reverse_number;
      while(n>0){
            rev=10*rev+(n%10);
            n=n/10;
      }
      reverse_number=rev;
      return reverse_number;
}

