// Your code here..
#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='O'){
        printf("Vowel");
    }
    else if(a>='a'&&a<='z'&&(a!='a'||a!='e'||a!='i'||a!='o'||a!='u'))
    {
        printf("Consonant");
    }
    else if(a>='0'&&a<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}