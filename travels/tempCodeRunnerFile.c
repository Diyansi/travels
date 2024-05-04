#include <stdio.h>

int main() {
    char game[9];
    int zero, cross;
    char Fquestion[4]; 
    
    printf("Do you want to play a game? (yes/no): ");
    scanf("%3s", Fquestion);
    
    if (Fquestion[0] == 'y' && Fquestion[1] == 'e' && Fquestion[2] == 's') { 
        printf("Let's start!\n");
        
        for (int i = 0; i < 9; i++) { 
            game[i] = '-';
        }

        for(int i = 0; i < 9; i++) { 
            printf("Give me position for zero (1-9): ");
            scanf("%d", &zero);
        
            if (game[zero - 1] == '-') {
                game[zero - 1] = '0';
            } else {
                printf("Position already taken. Choose another position.\n");
                continue;
            }
        
            for(int a = 0; a < 9; a++) {
                printf("\t %c", game[a]);
                if ((a + 1) % 3 == 0) { 
                    printf("\n \n");
                }
            }
        
            printf("Give me position for cross (1-9): ");
            scanf("%d", &cross);
        
            if (game[cross - 1] == '-') {
                game[cross - 1] = 'x';
            } else {
                printf("Position already taken. Choose another position.\n");
                continue;
            }
       
            for(int a = 0; a < 9; a++) {
                printf("\t %c", game[a]);
                if ((a + 1) % 3 == 0) { 
                    printf("\n \n");
                }
            }
        }
    } else {
        printf("Go fuck yourself!\n");
    }

    return 0;
}  
