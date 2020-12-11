#include "library.h"
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main(void) {
    int h,m,s;
    printf("Set Time:\nHour:");
    scanf("%d",&h);
    printf("Mins:");
    scanf("%d",&m);
    printf("Seconds:");
    scanf("%d",&s);
    if(h>24||m>60||s>60){
        printf("Error!! wrong Hour or Mins or Seconds");
        exit(0);
    }
    while(1){
        s++;

        if(s==59){
            m++;
            s=0;
        }
        if(m==59){
            h++;
            m=0;
        }
        if(h==23){
            h=1;
        }
        printf("Clock:\n%02d:%02d:%02d",h,m,s);
        Sleep(1000);
        system("cls");
    }
   return  0;
}


