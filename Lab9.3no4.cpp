#include <stdio.h>
#define MAX 50
int countVowel(char t[],int count[]);
void main() {
    char text[MAX],list[10]={'A','a','E','e','I','i','O','o','U','u'}; int count[10]={0,0,0,0,0,0,0,0,0,0};
    int cVowel;
    printf("Enter text : ");
    scanf("%s", text);
    cVowel = countVowel(text,count);
    printf("Text : [%s] has %d vowels\n", text, cVowel);
    for(int i=0;i<10;i++){
        if(count[i] != 0){
            printf("%c = %d\n",list[i],count[i]);
        }
    }
}

int countVowel(char t[],int count[]) {
    int i=0, Count=0;
    while (i<MAX && t[i]!='\0') {
        if (t[i]=='A' || t[i]=='a' || t[i]=='E' || t[i]=='e' || t[i]=='I' || t[i]=='i' ||
            t[i]=='O' || t[i]=='o' || t[i]=='U' || t[i]=='u'){
                if (t[i]=='A'){
                    count[0]++;
                }
                if (t[i]=='a'){
                    count[1]++;
                }
                if (t[i]=='E'){
                    count[2]++;
                }
                if (t[i]=='e'){
                    count[3]++;
                }
                if (t[i]=='I'){
                    count[4]++;
                }
                if (t[i]=='i'){
                    count[5]++;
                }
                if (t[i]=='O'){
                    count[6]++;
                }
                if (t[i]=='o'){
                    count[7]++;
                }
                if (t[i]=='U'){
                    count[8]++;
                }
                if (t[i]=='u'){
                    count[9]++;
                }
                Count++;
    }
    i++;
}
    return(Count);
}
