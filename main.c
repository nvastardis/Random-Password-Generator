#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int flag, length, i;
    char *Password;


    system("cls");
    while(1){
        fprintf( stdout, "Generate Password?\n");
        fprintf( stdout, "(1 = yes and 0 = no)\n");
        fscanf( stdin, "%d", &flag);

        if(flag == 0){
            fprintf(stdout, "\nThank you for using our Password Generator!\n");
            system("pause");
            return 0;
        }
        if(flag == 1){
            while(1){
                fprintf( stdout, "Please Enter a valid Length for Password: ");
                fscanf( stdin, "%d", &length);
                if(length)
                    break;
                fprintf( stdout, "Zero is not a valid length. Please try again...\n");
            }
            
            
            Password = malloc(length * sizeof(char));
            
            srand(time(NULL));
            for( i = 0 ; i < length; i++){
                int x;
                x = (rand() % 94) + 33;
                Password[i] = (char)x;
            }

            fprintf( stdout, "Password generated is: ");
            for( i = 0; i < length; i++)
                fprintf( stdout, "%c", Password[i]);
            fprintf(stdout, "\n");
        }
    }
    fprintf(stdout, "\nThank you for using our Password Generator!\n");
    
    system("pause");
    return 0;
}