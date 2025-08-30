#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
pid_t pid;
pid=fork();
if(pid>0)
{
printf("parent process (PID:%d)is going to sleep\n",getpid());
sleep(5);
printf("parent process (PID:%d)is woke up\n",getpid());
wait(NULL);
printf("parent process (PID:%d)is finished \n",getpid());
}
else{
printf("child process(PID:%d) is executing 'ls' command ...\n",getpid());
execl("/bin/ls","-l",NULL);
perror("execle failed");
return 1;
}
return 0;
}
