#include<stdio.h>
int main()
{
    char A;
    scanf("%s",&A);
    char uppercase;
    char lowercase;
    
     uppercase=(A=='A' || A=='E'||A=='I'||A=='O'||A=='U');
    lowercase=(A=='a'||A=='e'||A=='i'||A=='o'||A=='u');
    if(uppercase||lowercase){
    printf("Vowel");}
    else{
    printf("Consonant");}
    return 0;
}