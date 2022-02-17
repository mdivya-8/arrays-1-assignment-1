#REVERSING AN ARRAY#
#include <stdio.h>

int main()
{
   int a[]={2,3,4,5,6,8,7,9};
   int i;
   for(i=7;i>=0;i--)
       printf("%d",a[i]);
   
}
#SUM OF ALL ARRAY ELEMENTS#
#include<stdio.h>
int main(){
    int sum=0,i;
    int a[]={1,2,3,4,5};
   // int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
}


# COUNT OF ZEROS AND ONES#
#include<stdio.h>
int main(){
   
   int a[] = { 0,0,0,1,1,1,0};
   int count_0=0,count_1=0,i;
   int n=sizeof(a)/sizeof(a[0]);
   for(i=0;i<n;i++){
       if(a[i]==0){
           count_0++;
           printf("position is %d\n",a[i],i);
       }
      else{
      count_1++;
           printf("position is  %d\n",a[i],i);
   }
   printf("no of zeros in array is %d\n",count_0);
   printf("no of ones in array is %d\n",count_1);
   }
}

#EVEN AND ODD NUM WITH THEIR POSITIONS#
#include <stdio.h>

int main()
{
   int a[]={10,3,20,40,50,7};
   int i,n=sizeof(a)/sizeof(a[0]);
   for(i=0;i<n;i++){
       if(a[i]%2==0){
           printf("the even number and position is %d\n%d\n",a[i],i);
       }
       else if(a[i]%2!=0)
           printf("the odd num is and position is %d\n%d\n",a[i],i);
       
   }
}
