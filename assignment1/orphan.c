#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
pid_t p;
p=fork();
if(p==0){
 sleep(5);
 printf("i am child having PID %d\n",getpid());
 printf("My parent having PID %d \n",getpid());
 }
 else{
 printf("i am  parent having PID %d \n",getpid());
 printf("My child having PID %d\n",getpid());
 }
}
