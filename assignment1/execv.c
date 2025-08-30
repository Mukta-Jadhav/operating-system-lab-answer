#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
pid_t pid;
pid=fork();
if(pid==0){
printf("child process after fork,before exec:PID=%d,parent PID=%d\n",getpid(),getpid());
char* args[]={"/bin/ls","-l",NULL};
execv(args[0],args);
perror("execv failed");
exit(EXIT_FAILURE);
}
else{
printf("parent process after fork:PID=%d,child PID:%d \n",getpid(),pid);
wait(NULL);
printf("parent process :child terminated control returned to parent . parent PID:%d\n",getpid());
}
return 0;
}
