#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(){
pid_t p;
printf("\n before fork \n");
p=fork();
if(p==0){
printf("\n Hello world");
printf(" I am child having PID %d ",getpid());
printf("My parent having PID %d \n",getpid());
}
else{
printf("\n Hi");
printf(" I am parent having PID %d \n",getpid());
printf("  My child having PID %d \n",getpid());
}
}
