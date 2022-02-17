# WAP TO FIND SECOND LARGEST NUM USING MACROS#
#include<stdio.h>
#define SIZE 10
void main(){
    int a[SIZE]={7,5,11,3,9};
    int l=0,s=0;
    int i;
    for(i=0;i<SIZE;i++){
        if(a[i]>l){
            s=l;
            l=a[i];
        }
        else if(a[i]>s){
            s=a[i];
        }
    }
        printf("the second largest num is %d",s);
    
#AREA OF A CIRCLE USING MACROS#
#include<stdio.h>
#define PI 3.14
void main(){
    float area,r=4;
    area=PI*r*r;
    printf("area of a circle is %f",area);
    
}}
