#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
int main(){
 int pid , retnice;
 pid=fork();
 for(;;){
 if(pid ==0){
 retnice=nice(-5) ;
 printf("child gets higher cpu priority %d \n",retnice);
 sleep(1);
 }
 else{
 retnice=nice(4);
 printf("parent gets lower cpu priority %d \n",retnice);
 sleep(1);
 }
 }
}
