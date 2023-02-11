#include<stdio.h>
int main()
{
    char name1[15], name2[15];
    int length1, length2;
    printf("Enter first name:");
    scanf("%s",name1);
    printf("Enter last name:");
    scanf("%s",name2);
    length1 = strlen(name1);
    length2 = strlen(name2);
    printf("%d %d", length1, length2);
    return 0;
}
