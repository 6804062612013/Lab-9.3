#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char str1[100], str2[100], str_rem[100];
    int i = 0, j = 0, k = 0;
    printf ("Enter the First string:\n");
    fflush (stdin);
    gets (str1);
    printf ("Enter the Second string:\n");
    gets (str2);
  
    for (i = 0; str1[i]!= '\0'; i++)
    {
        int count = 0;
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                count++;
            }
            else
            {
                str_rem[k] = str2[j];
                k ++;
            }
        }
        str_rem[k] = '\0';
        strcpy (str2, str_rem);
        if(count>0){
            printf("The letter %c has been deleted %d times\n",str1[i],count);
        }
        else{
            printf("The letter %c couldn't be found\n",str1[i]);
        }
        k = 0;
    }
    printf ("On removing characters from second string we get: %s\n", str_rem);
    return 0;
}
