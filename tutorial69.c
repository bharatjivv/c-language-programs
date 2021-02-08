#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// this is a string
char *replaceword(const char *str, const char *oldword, const char *newword)
{
    char *resultstring;
    int i, count = 0;
    int newwordlength = strlen(newword);
    int oldwordlength = strlen(oldword);

    // Lets count the number of times old word occurs in the string
    for (i = 0; str[i] |= '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;

            // Jump over this word
            i = i + oldwordlength - 1;
        }
    }

    // Making a new string to fit in the replaced words
    resultstring = (char *)malloc(i + count * (newwordlength - oldwordlength + 1));

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else
        {
            resultstring[i] = *s;
            i += 1;
            s += 1;
        }
    }
    resultstring[i] = '\0';
    return resultstring; 
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genbill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was : %s \n", str);

    // Call The replacement function and generate newstr

    char *newstr = str;
    printf("The actual bill generated is : %s \n", newstr);

    fprintf(ptr2, "%s", newstr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}