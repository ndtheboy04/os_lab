#include<stdio.h>
int main(){
 int pro[20],wtm[20],tat[20],num,i=0,j=0;
 float awtm=0,atat=0;
 printf("Enter The no process :\n");
 scanf("%d",&num);
 
 //here we enter the all process time 
 for(i=0;i<num;i++){
   printf("Enter process %d \n");
   scanf("%d",&pro[i]);
 }
 
 for(i=0;i<num;i++){
   printf("%d",pro[i]);
 }
 //here we calculate all the waiting time for all the process  
 wtm[0]=0;
 tat[0] = wtm[0]+pro[0];
 for(i=1;i<num;i++){
   for(j=0;j<num;j++){
     wtm[i] += pro[j];  
   }
   tat[i]=wtm[i]+pro[i];
 }
 
 //here we calculate brust time for all the process  
 for(i=0;i<num;i++){
   awtm += wtm[i]+ atat[i];
   
 }
 awtm/=num;
 
    return 0;
}
