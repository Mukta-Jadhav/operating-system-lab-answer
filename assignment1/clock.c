#include<stdio.h>
#include<time.h>
int main(){
clock_t start,end;
double cpu_time_used;
start=clock();
long long sum=0;
for(long long i=0;i<100000000;i++){
sum+=i;
}
printf("sum=%lld \n",sum);
end=clock();
cpu_time_used=((double)(end-start));
printf("execution time :%f seconds.\n",cpu_time_used);
return 0;
}
