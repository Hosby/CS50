/*
  이번에는 소문자를 대문자로 바꾸는 프로그램을 짜보았다.
  ASCII 코드를 이용해서 대소문자를 구별해 놓았다.
  소문자 - 32 를 하게 되면 대문자가 나온다. <- 이것을 활용함
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
