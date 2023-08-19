#include <stdio.h>
#include <string.h>

void reverse(char []);
void concatenate(char [], char []);
int palindrome(char []);
void copy(char [], char []);
int length(char []);
void frequency(char [], int []);
void vowels_consonants_spaces_digits(char []);

int main()
{
    char string1[100], string2[100];
    int choice, flag, len;
    int count[5] = {0}; // count[0] for vowels, count[1] for consonants, count[2] for spaces and count[3] for digits

    do
    {
        printf("\n\nEnter your choice:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Check if a string is palindrome or not\n");
        printf("4. Copy a string\n");
        printf("5. Find the length of a string\n");
        printf("6. Find the frequency of characters in a string\n");
        printf("7. Find the number of vowels, consonants, spaces and digits in a string\n");
        printf("8. Exit\n");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter a string to reverse: ");
                scanf("%s", string1);
                reverse(string1);
                break;

            case 2:
                printf("\nEnter first string: ");
                scanf("%s", string1);
                printf("\nEnter second string: ");
                scanf("%s", string2);
                concatenate(string1, string2);
                break;

            case 3:
                printf("\nEnter a string to check if it is palindrome or not: ");
                scanf("%s", string1);
                flag = palindrome(string1);

                if(flag == 1)
                    printf("\n%s is a palindrome.", string1);
                else
                    printf("\n%s is not a palindrome.", string1);
                break;

            case 4:
                printf("\nEnter a string to copy: ");
                scanf("%s", string1);
                copy(string1, string2);
                break;

            case 5:
                printf("\nEnter a string to find its length: ");
                scanf("%s", string1);
                len = length(string1);
                printf("\nThe length of %s is %d.", string1, len);
                break;

            case 6:
                printf("\nEnter a string to find its frequency of characters: ");
                scanf("%s", string1);
                frequency(string1, count);

                for(int i = 0; i < 26; i++)
                    if(count[i] != 0)
                        printf("\n%c occurs %d times.", i + 'a', count[i]);
                
                break;

            case 7:
                vowels_consonants_spaces_digits(string1);
                break;

            case 8:
                return 0;
            
            default:
                printf("\nInvalid choice.");
        }

    } while(choice != 8);

    return 0;
}

void reverse(char s[])
{
    int len = strlen(s);

    for(int i = len - 1; i >= 0; i--)
        putchar(s[i]);
}

void concatenate(char s[], char t[])
{
    strcat(s, t);
    printf("\nConcatenated String: %s", s);
}

int palindrome(char s[])
{
    int len = strlen(s);

    for(int i = 0; i < len / 2; i++)
        if(s[i] != s[len - i - 1])
            return 0;
    
    return 1;
}

void copy(char s[], char t[])
{
    strcpy(t, s);
    printf("\nCopied String: %s", t);
}

int length(char s[])
{
    return strlen(s);
}

void frequency(char s[], int count[])
{
    int len = strlen(s);

    for(int i = 0; i < len; i++)
        if(s[i] >= 'a' && s[i] <= 'z')
            count[s[i] - 'a']++;
}


