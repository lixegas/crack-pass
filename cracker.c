#include<stdio.h>
#include<string.h>


int main(){

        char secret_pass[] = "matteo";
        char insert_pass[100];
        int tentativi = 3;

        while(tentativi > 0){
                printf("Insert password: ");
                fgets(insert_pass, sizeof(insert_pass), stdin);
                insert_pass[strcspn(insert_pass,"\n")] = 0;

                if(strcmp(secret_pass, insert_pass) == 0) {
                        printf("Password correct");
                        break;
                        } else {
                        tentativi--;
                        printf("Password errata! Ti rimangono %d tentativi.\n", tentativi);
                        }
        }

        if(tentativi == 0) {
        printf("Hai esaurito i tentativi");
        }

        return 0;
}


