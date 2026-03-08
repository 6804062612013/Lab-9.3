#include<stdio.h>
#include <ctype.h>
#include <conio.h>
int SumNum(char t[]);
int main() {
    char text[30];
    printf("Enter Input: "); gets(text);
    printf("Sum of digit char: %d",SumNum(text));
    return 0;
}

int SumNum(char t[]){
    int i=0,sum=0;
    while (i<30 && t[i]!='\0') {
      if(isdigit(t[i])){
        sum += ((int)t[i]-48);
      }
      i++;
    }
    return sum;
}
