/*
  c 라이브러리 string.h에 정의되어 있는 strlen를 활용하여 코드를 작성하였다.
  strlen은 문자의 길이를 나타내는 함수이다.
  (지금 배우고 있는 자바에서는 클래스함수를 호출해서 ".length" 를 사용한다. 참고하자.!)
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output:\n");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", s[i]);
    }
}
