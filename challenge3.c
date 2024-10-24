#include <stdio.h>
int main ()
{
    char caractere;
    printf("entre the caractere.\n");
    scanf("%c",&caractere);

    switch(caractere){

    case  'a':
    case  'e':
    case  'u':
    case  'i':
    case  'o':
        // bach ila user dkhl b maj
        case 'A' :
        case 'E' :
        case 'U' :
        case 'I' :
        case 'O' :

        printf("vowel\n");
    break;

    default : printf("consonant");
    break;
    return 0;



    }

}
