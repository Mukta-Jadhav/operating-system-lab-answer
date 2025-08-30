#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
int main(){
pid_t p;
printf("\n before fork \n");
p=fork();
if(p==0){
printf("\n Hello world");
printf("\n I am child having PID %d ",getpid());
printf("\n My parent having PID %d",getpid());
}
else{
printf("\n Hi");
printf("\n I am parent having PID %d",getpid());
printf("\n  My child having PID %d ",getpid());
}
}
