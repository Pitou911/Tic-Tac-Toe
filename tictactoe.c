#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int check, choice, player = 1;
char mark;
char key[10] = {'o','1','2','3','4','5','6','7','8','9'};

void display();
int winCheck();
void play();
void result();

int main()
{   
    
    do{
        play();
    }while(check == -1);
    result();
    return 0;
}

void display()
{
    system("cls");
    printf("\t\tWelcome To Tic Tac Toe!!\n\n");
    printf("\t\tPlayer 1 is 'O', Player 2 is 'X'\n\n");
    printf("\t\t  %c   |   %c   |   %c  \n",key[1],key[2],key[3]);
    printf("\t\t------------------------\n");
    printf("\t\t  %c   |   %c   |   %c  \n",key[4],key[5],key[6]);
    printf("\t\t------------------------\n");
    printf("\t\t  %c   |   %c   |   %c  \n",key[7],key[8],key[9]);
}

int winCheck()
{
    if(key[1] == key[2] && key[2] == key[3]){
        return 1;
    }else if(key[4] == key[5] && key[5] == key[6]){
        return 1;  
    }else if(key[7] == key[8] && key[8] == key[9]){
        return 1;
    }else if(key[1] == key[5] && key[5] == key[9]){
        return 1;
    }else if(key[3] == key[5] && key[5] == key[7]){
        return 1;
    }else if(key[1] == key[4] && key[4] == key[7]){
        return 1;
    }else if(key[2] == key[5] && key[5] == key[8]){
        return 1;
    }else if(key[3] == key[6] && key[6] == key[9]){
        return 1;
    }else if(key[1] != '1' && key[2] != '2' && key[3] != '3' &&
        key[4] != '4' && key[5] != '5' && key[6] != '6' && key[7] 
        != '7' && key[8] != '8' && key[9] != '9'){
        return 0;
    }else{
        return -1;
    }
}

void play()
{
    display();
        player=(player % 2) ? 1 : 2;
        printf("Player %d, please enter the number: ", player);
        scanf("%d", &choice);
        if(player == 1)
            mark = 'O';
        else
            mark = 'X';
        if(choice == 1 && key[1] == '1')
            key[1] = mark;
        else if(choice == 2 && key[2] == '2')
            key[2] = mark;
        else if(choice == 3 && key[3] == '3')
            key[3] = mark;
        else if(choice == 4 && key[4] == '4')
            key[4] = mark;
        else if(choice == 5 && key[5] == '5')
            key[5] = mark;
        else if(choice == 6 && key[6] == '6')
            key[6] = mark;
        else if(choice == 7 && key[7] == '7')
            key[7] = mark;
        else if(choice == 8 && key[8] == '8')
            key[8] = mark;
        else if(choice == 9 && key[9] == '9')
            key[9] = mark;
        else{
            printf("Wrong Move!!\n");
            player--;
            getch();
        }
        check = winCheck();
        player++;
}

void result()
{
    display();
    if(check == 1){
        printf("Congratulation!!! Player %d win",--player);
    }else{
        printf("Leng pun ng oy smer hah");
    }
    getch();
}