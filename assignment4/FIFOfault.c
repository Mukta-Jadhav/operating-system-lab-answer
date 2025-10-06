#include<stdio.h>
#include<stdlib.h>

#define REFERENCE_LENGTH 12

int reference_string[REFERENCE_LENGTH]={0,2,1,6,4,0,1,0,3,1,2,1};

int isInMemory(int memory[],int n,int page){
for(int i=0;i<n;i++){
  if(memory[i]==page)
    return 1;
    }
   return 0;
}

void printMemory(int memory[],int n){
  for(int i=0;i<n;i++){
   if(memory[i]==-1)
     printf("-");
   else
      printf("%d",memory[i]);
      }
  }
  
  int main(){
     int n;
     printf("Enter the number of memory frames:");
     scanf("%d",&n);
     
     int memory[n];
     int page_Faults=0;
     int next_to_replace=0;
     
     for(int i=0;i<n;i++){
       memory[i]=-1;
       }
       
       printf("\n Page \tMemory State\t\t Page Fault\n");
       printf("------\t--------------\t\t-------------\n");
       
       for(int i=0;i<REFERENCE_LENGTH;i++){
       int current_page=reference_string[i];
       printf("%2d\t",current_page);
       
       if (!isInMemory(memory,n,current_page)){
       
         memory[next_to_replace]=current_page;
         next_to_replace=(next_to_replace+1)%n;
         page_Faults++;
         
         printMemory(memory,n);
         printf("\tYes\n");
         }
         else{
         printMemory(memory,n);
         printf("\tNo\n");
         
         }
  }
     printf("\nTotal Page Faults: %d\n", page_Faults);

    return 0;
}
