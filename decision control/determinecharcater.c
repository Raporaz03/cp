/*AZ 65-90
 az 97-122
 0-9 48-57
 */

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    printf("Upper case letter");
    if(ch>=97&&ch<=122)
    printf("Lower case letter");
    if(ch>=48&&ch<=57)
    printf("Numbers");
    return 0;

}