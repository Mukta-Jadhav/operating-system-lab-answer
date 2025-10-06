#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
pid_t p;
p=fork();
if(p==0)//child
{
printf("i am child having pid %d \n",getpid());
printf("my parent id is %d \n",getpid());
}
else{//parent
printf("I am parent having pid %d \n",getpid());
printf("my child pid is %d\n",p);
}
}

