#include <stdio.h>

int main(){

    char num1[20], num2[20], num3[20];

    scanf("%s %s %s", &num1, &num2, &num3);

    if(num1[0] == 'v'){

        if(num2[0] == 'a'){
            if(num3[0] == 'c') printf("aguia\n");
            else printf("pomba\n");
                          }

        else {
            if(num3[0] == 'o') printf("homem\n");
            else printf("vaca\n");
             }

    }else {
           if(num2[0] == 'i'){
            if(num3[2] == 'm') printf("pulga\n");
            else printf("lagarta\n");
           }

        else {
            if(num3[0] == 'h') printf("sanguessuga\n");
            else printf("minhoca\n");
             }
    }
return 0;
}
