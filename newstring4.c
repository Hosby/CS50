/*
  이번에는 ctype 라이브러리에 정의되어 있는 toupper 함수를 사용하여 대문자로 변환해보았다.
  c 언어에도 여러 라이브러리를 활용해서 함수를 잘 활용하면 정말 대단한 프로그램이 작성될 것 같다!
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}
/*
string.h
strlen : 문자열 길이 구한다.

strcpy : 문자열 초기화 한다.

strcat : 문자열 연결한다.

strcmp : 문자열 비교한다.

strstr : 문자열을 찾는다.

strupr : 대문자로 바꾼다.

strlwr : 소문자로 바꾼다.

ctype.c
int isalpha(int c) : 주어진 문자가 알파벳 인지 검사한다. A-Z a-z

int isalnum(int c) : 주어진 문자가 알파벳 또는 숫자인지 검사한다. A-Z a-z 0-9

int isdigit(int c) : 주어진 문자가 숫자인지 검사한다. 0-9

int isxdigit(int c) : 주어진 문자가 16 진수인지를 검사한다. 0-9 a-f A-F

int iscntrl(int c) : 제어(control)문자인지를 검사한다.

int isspace(int c) : FF('\f'), NL('\n'), CR('\r'), HT('\t'), VT('\v'), 공백문자(' ')등을 검사한다.

int ispunct(int c) : 알파벳문자 혹은 공백문자가 아닌 출력가능한 문자인지 확인한다.

int isgraph(int c) : 공백문자를 제외한 출력가능 문자인지 검사한다.

int isprint(int c) : 공백문자를 포함한 출력가능한 문자인지 검사한다.

int islower(int c) : 소문자인지 검사한다. a-z

int isupper(int c) : 대문자인지 검사한다. A-Z

int tolower(int c) : 입력된 문자를 대문자로 변경한다.

int toupper(int c) : 입력된 문자를 소문자로 변경한다.
*/
