/// /////////////////////////////////////////////////////////////// /// <3
/// =============================================================== /// <3
/// --------------------------------------------------------------- /// <3
/// ----------- For educational purposes and having fun ----------- /// <3
/// --------------------------------------------------------------- /// <3
/// This Game was made by Adham, Saif and Khaled for CSCI112 course /// <3
/// --------------------------------------------------------------- /// <3
/// -------------- We hope to enjoy reading our code -------------- /// <3
/// ------------------------------------------------------@2021---- /// <3
/// =============================================================== /// <3
/// /////////////////////////////////////////////////////////////// /// <3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define correct "\033[0;32mCORRECT !!!!\033[0m"
#define wrong "\033[0;31mWRONG !!!!\033[0m"

char Lines[11][96] = {
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/',},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/','/','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','/','/','/',},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/','/','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','/','/','/',},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/','/','-','-','-','-','-','-','-','-','-','-','-',' ','F','o','r',' ','e','d','u','c','a','t','i','o','n','a','l',' ','p','u','r','p','o','s','e','s',' ','a','n','d',' ','h','a','v','i','n','g',' ','f','u','n',' ','-','-','-','-','-','-','-','-','-','-','-','/','/','/',},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/','/','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','/','/','/',},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/','/','T','h','i','s',' ','G','a','m','e',' ','w','a','s',' ','m','a','d','e',' ','b','y',' ','A','d','h','a','m',',',' ','S','a','i','f',' ','a','n','d',' ','K','h','a','l','e','d',' ','f','o','r',' ','C','S','C','I','1','1','2',' ','c','o','u','r','s','e','/','/','/',},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/','/','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','/','/','/',},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/','/','-','-','-','-','-','-','-','-','-','-','-','-','-','-',' ','W','e',' ','h','o','p','e',' ','t','o',' ','e','n','j','o','y',' ','r','e','a','d','i','n','g',' ','o','u','r',' ','c','o','d','e',' ','-','-','-','-','-','-','-','-','-','-','-','-','-','-','/','/','/',},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/','/','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','@','2','0','2','1','-','-','/','/','/',},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/','/','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','/','/','/',},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/','/',}
};

char username[100];

// main menu screen with navigation instructions.
void main_menu(){
    system("cls");
    printf("\n");
    printf("\t\t\t\t\t ________________________________________\n");
    printf("\t\t\t\t\t|                                        |\n");
    printf("\t\t\t\t\t|           C PROGRAM QUIZ GAME          |\n");
    printf("\t\t\t\t\t|________________________________________|\n");
    printf("\t\t\t\t\t|                                        |\n");
    printf("\t\t\t\t\t|                \033[0;33mWELCOME\033[0m                 |\n");
    printf("\t\t\t\t\t|                   \033[0;33mto\033[0m                   |\n");
    printf("\t\t\t\t\t|                \033[0;33mTHE GAME\033[0m                |\n");
    printf("\t\t\t\t\t|________________________________________|\n");
    printf("\t\t\t\t\t|                                        |\n");
    printf("\t\t\t\t\t|________________________________________|\n");
    printf("\t\t\t\t\t|                                        |\n");
    printf("\t\t\t\t\t|  BECOME A MILLIONAIRE \033[0;36m!!!!!!!!!!!!!!!\033[0m  |\n");
    printf("\t\t\t\t\t|________________________________________|\n");
    printf("\t\t\t\t\t|                                        |\n");
    printf("\t\t\t\t\t|________________________________________|\n");
    printf("\t\t\t\t\t|                                        |\n");
    printf("\t\t\t\t\t|  \033[0;36m>\033[0m Press S to start the game           |\n");
    printf("\t\t\t\t\t|  \033[0;36m>\033[0m Press V to view the highest score   |\n");
    printf("\t\t\t\t\t|  \033[0;36m>\033[0m Press R to reset score              |\n");
    printf("\t\t\t\t\t|  \033[0;36m>\033[0m Press H for help                    |\n");
    printf("\t\t\t\t\t|  \033[0;36m>\033[0m Press C for credits                 |\n");
    printf("\t\t\t\t\t|  \033[0;36m>\033[0m Press Q to quit                     |\n");
    printf("\t\t\t\t\t|________________________________________|\n");
    printf("\n");
        Beep(250, 100);
        Beep(350, 100);
        Beep(250, 100);

    int choice = getch();
    if(choice == 's')
    {
        printf("\n\t\t\t\tEnter your name...\n\t\t\t\t");
        scanf("%s", &username);
        Second_Welcome();
    }
    else if(choice == 'v')
    {
        High_Score();
    }
    else if(choice == 'r')
    {
        reset_High_Score();
    }
    else if(choice == 'h')
    {
        Second_Welcome();
    }
    else if(choice == 'q')
    {
        printf("\t\t Quitting Game.... \n\n");
        Beep(500, 500);
        printf("\t   ==============================\n");
        printf("\t  | Press any key to Exit .....  |\n");
        printf("\t   ==============================\n");
        printf("\n");
    }
    else if(choice == 'c')
    {
        choose_credit();
    }
    else
    {
        system("cls");
        printf("\n\n\n");
        printf("\t\t\t     Wrong Input ): press any key to return to the main menu .... ");
        Beep(500, 500);
        printf("\n\n");
        printf("\t\t\t\t   =================================================\n");
        printf("\t\t\t\t  | Press any key to return to the main menu .....  |\n");
        printf("\t\t\t\t   =================================================\n");
            Beep(350, 100);
            Beep(250, 100);
        getch();
        main_menu();
    }
}

// Second welcome screen with instructions and called the help screen too.
void Second_Welcome()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t ____________________________________________________________________________________\n");
    printf("\t\t|                                                                                    |\n");
    printf("\t\t|-------------------------- \033[0;33mWelcome to C Program Quiz Game\033[0m --------------------------|\n");
    printf("\t\t|------------------------------------------------------------------------------------|\n");
    printf("\t\t|      Here are some tips you might wanna know before playing:                       |\n");
    printf("\t\t|------------------------------------------------------------------------------------|\n");
    printf("\t\t|  \033[0;36m>>\033[0m  There are 2 rounds in this Quiz Game, WARMUP ROUND & CHALLANGE ROUND          |\n");
    printf("\t\t|  \033[0;36m>>\033[0m  In warmup round you will be asked a total of 3 questions to test your         |\n");
    printf("\t\t|      general knowledge. you are eligible to play the game if you give at least 2   |\n");
    printf("\t\t|      right answers, otherwise you can't proceed further to the Challenge Round.    |\n");
    printf("\t\t|  \033[0;36m>>\033[0m  Your game starts with CHALLENGE ROUND. In the round you will be asked a       |\n");
    printf("\t\t|      total of 10 questions. Each right answer will be awarded $100,000!            |\n");
    printf("\t\t|      By this way you can win upto one MILLION cash prize!!!!! ........             |\n");
    printf("\t\t|  \033[0;36m>>\033[0m  You will be asked questions continuously, till right answers are given.       |\n");
    printf("\t\t|  \033[0;36m>>\033[0m  No negative marking for wrong answers!                                        |\n");
    printf("\t\t|                                                                                    |\n");
    printf("\t\t|                   !!!!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!!!!                   |\n");
    printf("\t\t|                                                                                    |\n");
    printf("\t\t|   \033[0;36m>\033[0m Press Y to start the game!                                                     |\n");
    printf("\t\t|   \033[0;36m>\033[0m Press any other key to return to the main menu!                                |\n");
    printf("\t\t|____________________________________________________________________________________|\n");
    printf("\n\n");
    Beep(650, 250);

    int choice = getch();
    if (choice == 'y' || choice == 'Y')
    {
        warm_up_questions();
    }
    else
    {
        main_menu();
    }

    printf("\n\n\n");
}

// mindstorming question to check user's eligibility.
void warm_up_questions(){
    int chances = 0;
    char answer;

    system("cls");
    printf("\n\n\t\t   Please answer the following questions to win the cash prize (up to $1 million) \n\t\t   Please state if T or F :\n");
    Beep(650, 250);

    //question 1 in warming up section
    printf("\n\n 1) The scanf standard library function displays information on the screen.\n    Your answer is ");
    fflush(stdin);// to erase data in (answer) variable
    scanf("%c", &answer);

    if(answer == 'f' || answer == 'F')
    {
        chances++;
        printf("\n\t\t%s\n", correct);
        Beep(1000, 500);
    }
    else if (answer == 't' || answer == 'T')
    {
        printf("\n\t\t%s\n", wrong);
        Beep(500, 500);
    }
    else
    {
        printf("\n\t Wrong input it will be considered as wrong answer ...");
    }
    fflush(stdin);// to erase data in (answer) variable

    //question 2 in warming up section
    printf("\n\n 2) Every C program begins execution at the function main.\n    Your answer is ");
    scanf("%c", &answer);
    if(answer == 't' || answer == 'T')
    {
        chances++;
        printf("\n\t\t%s\n", correct);
        Beep(1000, 500);
    }
    else if(answer == 'f' || answer == 'F')
    {
        printf("\n\t\t%s\n", wrong);
        Beep(500, 500);
    }
    else
    {
        printf("\n\t Wrong input it will be considered as wrong answer ...");
    }
    fflush(stdin);// to erase data in (answer) variable

    //question 3 in warming up section
    printf("\n\n 3) (X =+ 1) is C statements that add 1 to integer variable x.\n    Your answer is ");
    scanf("%c", &answer);
    if(answer == 'f' || answer == 'F')
    {
        chances++;
        printf("\n\t\t%s\n", correct);
        Beep(1000, 500);
    }
    else if(answer == 't' || answer == 'T')
    {
        printf("\n\t\t%s\n", wrong);
        Beep(500, 500);
    }
    else
    {
        printf("\n\t Wrong input it will be considered as wrong answer ...");
    }

    isEligible(chances);
}

// function to check if the user eligible to play this game or not.
void isEligible(int chances){
    system("cls");

    if (chances < 2)
    {
        printf("\n\n\t\t\t SORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME.\n\n press any key to go to main menu\n");
        getch();
        main_menu();
    }
    else
    {
        printf("\n\n\t\t\t\t CONGRATULATION %s your are eligible to play this game ", username);
        printf("\n\n\t\t\t\t         !!! Press   Y   to start the game !!! \n\n");
        int choice = getch();
        if (choice == 'y' || choice == 'Y')
        {
            challenge_round(chances);
        }
        else
        {
            main_menu();
        }
    }
}

// section with questions to play the game
void challenge_round(int chances)
{
    int rightAnswers = chances;
    char answer;

    system("cls");
    printf("\n\n\t\t   Please continue answering the upcoming questions to win the cash prize (up to $1 million) \n\t\t   Please state if T or F :\n");
    //question 4

    printf("\n\n 4) The while repetition statement specifies that a statement or group of statements is to be executed \n    repeatedly while some condition remains true.\n    Your answer is: ");
    fflush(stdin);// to erase data in (answer) variable
    scanf("%c", &answer);

    if(answer == 't' || answer == 'T')
    {
        rightAnswers++;
        printf("\n\t\t%s\n", correct);
        Beep(1000, 500);
    }
    else if(answer == 'f' || answer == 'F')
    {
        printf("\n\t\t%s\n", wrong);
        Beep(500, 500);
    }
    else
    {
        printf("\n\t Wrong input it will be considered as wrong answer ...");
    }
    fflush(stdin);// to erase data in (answer) variable

    //question 5
    printf("\n\n 5) The for statement is used to make decisions.\n    Your answer is: ");
    fflush(stdin);// to erase data in (answer) variable
    scanf("%c", &answer);

    if(answer == 'f' || answer == 'F')
    {
        rightAnswers++;
        printf("\n\t\t%s\n", correct);
        Beep(1000, 500);
    }
    else if(answer == 't' || answer == 'T')
    {
        printf("\n\t\t%s\n", wrong);
        Beep(500, 500);
    }
    else
    {
        printf("\n\t Wrong input it will be considered as wrong answer ...");
    }
    fflush(stdin);// to erase data in (answer) variable

    //question 6
    printf("\n\n 6) The escape sequence ( \\t ) represents the newline character, which causes the cursor to position \n    to the beginning of the next line on the screen.\n    Your answer is: ");
    fflush(stdin);// to erase data in (answer) variable
    scanf("%c", &answer);

    if(answer == 'f' || answer == 'F')
    {
        rightAnswers++;
        printf("\n\t\t%s\n", correct);
        Beep(1000, 500);
    }
    else if(answer == 't' || answer == 'T')
    {
        printf("\n\t\t%s\n", wrong);
        Beep(500, 500);
    }
    else
    {
        printf("\n\t Wrong input it will be considered as wrong answer ...");
    }
    fflush(stdin);// to erase data in (answer) variable

    //question 7

    printf("\n\n 7) All variables must be given a type when they’re defined.\n    Your answer is: ");
    fflush(stdin);// to erase data in (answer) variable
    scanf("%c", &answer);

    if(answer == 't' || answer == 'T')
    {
        rightAnswers++;
        printf("\n\t\t%s\n", correct);
        Beep(1000, 500);
    }
    else if(answer == 'f' || answer == 'F')
    {
        printf("\n\t\t%s\n", wrong);
        Beep(500, 500);
    }
    else
    {
        printf("\n\t Wrong input it will be considered as wrong answer ...");
    }
    fflush(stdin);// to erase data in (answer) variable

    //question 8

    printf("\n\n 8) A variable that is known only within the function in which it’s defined is called a global variable.\n    Your answer is: ");
    fflush(stdin);// to erase data in (answer) variable
    scanf("%c", &answer);

    if(answer == 'f' || answer == 'F')
    {
        rightAnswers++;
        printf("\n\t\t%s\n", correct);
        Beep(1000, 500);
    }
    else if(answer == 't' || answer == 'T')
    {
        printf("\n\t\t%s\n", wrong);
        Beep(500, 500);
    }
    else
    {
        printf("\n\t Wrong input it will be considered as wrong answer ...");
    }
    fflush(stdin);// to erase data in (answer) variable

    //question 9

    printf("\n\n 9) A function prototype declares the return type of the function and declares the number, the types, \n    and order of the parameters the function expects to receive.\n    Your answer is: ");
    fflush(stdin);// to erase data in (answer) variable
    scanf("%c", &answer);

    if(answer == 't' || answer == 'T')
    {
        rightAnswers++;
        printf("\n\t\t%s\n", correct);
        Beep(1000, 500);
    }
    else if(answer == 'f' || answer == 'F')
    {
        printf("\n\t\t%s\n", wrong);
        Beep(500, 500);
    }
    else
    {
        printf("\n\t Wrong input it will be considered as wrong answer ...");
    }
    fflush(stdin);// to erase data in (answer) variable

    //question 10

    printf("\n\n 10) Keywords extern and static are used to declare identifiers for variables and functions of static \n    storage duration.\n    Your answer is: ");
    fflush(stdin);// to erase data in (answer) variable
    scanf("%c", &answer);

    if(answer == 't' || answer == 'T')
    {
        rightAnswers++;
        printf("\n\t\t%s\n", correct);
        Beep(1000, 500);
    }
    else if(answer == 'f' || answer == 'F')
    {
        printf("\n\t\t%s\n", wrong);
        Beep(500, 500);
    }
    else
    {
        printf("\n\t Wrong input it will be considered as wrong answer ...");
    }
    fflush(stdin);// to erase data in (answer) variable

    printf("\n\n");
    printf("\t\t\t\t   =================================================\n");
    printf("\t\t\t\t  | Press any key to go to the next screen .......  |\n");
    printf("\t\t\t\t   =================================================\n\n");
    getch();
    calculate_Score(rightAnswers);
}

// this void is to calculate the final cash prize and display it
void calculate_Score(int rightAnswers)
{
    system("cls");
    int cashPrize = rightAnswers * 100000;
    printf("\n\n\n");
    printf("\t\t\t\t\t\t * CONGRATIOLATION * \n");
    printf("\t\t\t\t\t\t * You won $%d *", cashPrize);
    printf("\n\n");
    printf("\t\t\t\t   =================================================\n");
    printf("\t\t\t\t  | Press any key to return to Show High Score ...  |\n");
    printf("\t\t\t\t   =================================================\n");
        Beep(250, 100);
        Beep(350, 100);
        Beep(250, 100);
    getch();
    High_Score(cashPrize);
}

// function to reset high score
void reset_High_Score()
{
    FILE *file = fopen("HighScore.txt", "w");
    fputs("0", file);
    fclose(file);
    system("cls");
    printf("\n\n\n\t\t\t\t\t   Score has been reset Successfully \n");
    Beep(250, 350);
    printf("\n\n");
    printf("\t\t\t\t   =================================================\n");
    printf("\t\t\t\t  | Press any key to go to return to the main menu  |\n");
    printf("\t\t\t\t   =================================================\n");
        Beep(350, 100);
        Beep(250, 100);
    getch();
    main_menu();
}

// function to show the highest score
void High_Score(int Score)
{
    fflush(stdin);
    system("cls");
    int HighScore = 0;
    char c_HighScore;
    char data_HighScore[1000];
    int index_HighScore = 0;

    /// Start Reading High Score data from High Score File
    FILE *readFile_High = fopen("HighScore.txt", "r");
    while((c_HighScore = fgetc(readFile_High)) != EOF){
      data_HighScore[index_HighScore] = c_HighScore;
      index_HighScore++;
    }
    HighScore = atoi(data_HighScore);
    /// End

    if (Score > HighScore)
    {
        itoa(Score, data_HighScore, 10);
        FILE *file = fopen("HighScore.txt", "w");
        fputs(data_HighScore, file);
        fclose(file);
        FILE *fileAppend = fopen("HighScore.txt", "a");
        fputs(" and it was secured to ", fileAppend);
        fputs(username, fileAppend);
        fclose(fileAppend);
        printf("\n\n\n\t\t\t\t The high score is %d and it was secured to %s.... \n", Score, username);
        Beep(250, 350);
    }
    else
    {
        if (HighScore == NULL)
        {
            printf("\n\n\n\t\t\t\t\t   There is no high score yet.... \n");
            Beep(250, 350);
        }
        else
        {
            printf("\n\n\n\n\t\t\t\t The high score is ");
            for(int i = 0; data_HighScore[i] != NULL; i++)
            {
                printf("%c", data_HighScore[i]);
                if (i % 2 == 0)
                    Beep(250, 1);
            }
            printf("\n");
            Beep(250, 350);
        }
    }
    printf("\n\n");
    printf("\t\t\t\t   =================================================\n");
    printf("\t\t\t\t  | Press any key to return to the main menu .....  |\n");
    printf("\t\t\t\t   =================================================\n");
        Beep(350, 100);
        Beep(250, 100);
    getch();
    main_menu();
}

// credits functions in two ways
void choose_credit()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t\t\t   Press 1 for the first way and 2 for the second way \n\n\n");
    printf("\t\t\t\t      ###############            ################ \n");
    printf("\t\t\t\t      ###         ###            ###          ### \n");
    printf("\t\t\t\t      ###  First  ###            ###  Second  ### \n");
    printf("\t\t\t\t      ###   Way   ###            ###   Way    ### \n");
    printf("\t\t\t\t      ###         ###            ###          ### \n");
    printf("\t\t\t\t      ###############            ################ \n");

    int choice = getch();
    if(choice == '1')
    {
        Credits_1(250, 50);
    }
    else if (choice == '2')
    {
        Credits_2(250, 1);
    }
    else
    {
        printf("\n\n\n");
        printf("\t\t\t     Wrong Input ): press any key to return to the main menu .... ");
        Beep(500, 500);
        printf("\n\n");
        printf("\t\t\t\t   =================================================\n");
        printf("\t\t\t\t  | Press any key to return to the main menu .....  |\n");
        printf("\t\t\t\t   =================================================\n");
            Beep(350, 100);
            Beep(250, 100);
        getch();
        main_menu();
    }
}
void Credits_1(int tone, int delay)
{
    for (int i = 96; i > 0; i--)
    {
        system("cls");
        printf("\n\n\n\n");
        for (int j = 0; j <= 11; j++)
        {
            for (int k = 97 - i; k > 0; k--)
            {
                printf("%c", Lines[j][i-k]);
            }
            printf("\n");
        }
        if (i % 3 == 0)
            Beep(tone, delay);
    }

    printf("\n\n");
    printf("\t\t\t\t   =================================================\n");
    printf("\t\t\t\t  | Press any key to return to the main menu .....  |\n");
    printf("\t\t\t\t   =================================================\n");
        Beep(350, 100);
        Beep(250, 100);
    getch();
    main_menu();
}
void Credits_2(int tone, int delay)
{
    system("cls");
    char Line0[] = "\t\t\t///////////////////////////////////////////////////////////////////// <3\n";
    char Line1[] = "\t\t\t///===============================================================/// <3\n";
    char Line2[] = "\t\t\t///---------------------------------------------------------------/// <3\n";
    char Line3[] = "\t\t\t///----------- For educational purposes and having fun -----------/// <3\n";
    char Line4[] = "\t\t\t///---------------------------------------------------------------/// <3\n";
    char Line5[] = "\t\t\t///This Game was made by Adham, Saif and Khaled for CSCI112 course/// <3\n";
    char Line6[] = "\t\t\t///---------------------------------------------------------------/// <3\n";
    char Line7[] = "\t\t\t///-------------- We hope to enjoy reading our code --------------/// <3\n";
    char Line8[] = "\t\t\t///------------------------------------------------------@2021----/// <3\n";
    char Line9[] = "\t\t\t///===============================================================/// <3\n";
    char Line10[] ="\t\t\t///////////////////////////////////////////////////////////////////// <3\n";

    printf("\n\n\n");

    for(int i = 0; Line0[i] != NULL; i++)
    {
        printf("%c", Line0[i]);
        if (i % 2 == 0)
            Beep(tone, delay);
    }
    for(int i = 0; Line1[i] != NULL; i++)
    {
        printf("%c", Line1[i]);
        if (i % 2 == 0)
            Beep(tone, delay);
    }
    for(int i = 0; Line2[i] != NULL; i++)
    {
        printf("%c", Line2[i]);
        if (i % 2 == 0)
            Beep(tone, delay);
    }
    for(int i = 0; Line3[i] != NULL; i++)
    {
        printf("%c", Line3[i]);
        if (i % 2 == 0)
            Beep(tone, delay);
    }
    for(int i = 0; Line4[i] != NULL; i++)
    {
        printf("%c", Line4[i]);
        if (i % 2 == 0)
            Beep(tone, delay);
    }
    for(int i = 0; Line5[i] != NULL; i++)
    {
        printf("%c", Line5[i]);
        if (i % 2 == 0)
            Beep(tone, delay);
    }
    for(int i = 0; Line6[i] != NULL; i++)
    {
        printf("%c", Line6[i]);
        if (i % 2 == 0)
            Beep(tone, delay);
    }
    for(int i = 0; Line7[i] != NULL; i++)
    {
        printf("%c", Line7[i]);
        if (i % 2 == 0)
            Beep(tone, delay);
    }
    for(int i = 0; Line8[i] != NULL; i++)
    {
        printf("%c", Line8[i]);
        if (i % 2 == 0)
            Beep(tone, delay);
    }
    for(int i = 0; Line9[i] != NULL; i++)
    {
        printf("%c", Line9[i]);
        if (i % 2 == 0)
            Beep(tone, delay);
    }
    for(int i = 0; Line10[i] != NULL; i++)
    {
        printf("%c", Line10[i]);
        if (i % 2 == 0)
            Beep(tone, delay);
    }

    printf("\n\n");
    printf("\t\t\t\t   =================================================\n");
    printf("\t\t\t\t  | Press any key to return to the main menu .....  |\n");
    printf("\t\t\t\t   =================================================\n");
        Beep(350, 100);
        Beep(250, 100);
    getch();
    main_menu();
}

// the big boss function
int main(){
    FILE *writeFile_High = fopen("HighScore.txt", "a");
    fputs("", writeFile_High);
    main_menu();

    /// This code is for reference for writing and reading from files
    /*
    char c;
    int data;
    char word[1000];
    int index = 0;

    // Write to the file
    FILE *file = fopen("newsave.txt", "w");
    fputs("\n ahmed \n LOL \n MSM \n", file);
    fclose(file);

    // Print all the file content
    FILE *read = fopen("newsave.txt", "r");
    while((c = fgetc(read)) != EOF){
      word[index] = c;
      index++;
    }
    data = atoi(word);
    if (data > 500)
        printf("%d", data+1);
    fclose(read);

    printf(“\033[0;31m”); //Set the text to the color red
    printf(“Hello\n”); //Display Hello in red
    printf(“\033[0m”); //Resets the text to default color

    */

    return 0;
}
