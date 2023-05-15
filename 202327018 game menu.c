#include <stdio.h>

int print_title_screen()
{       
    printf("########################\n");
    printf("##                    ##\n");
    printf("##      DinoRun       ##\n");
    printf("##       V.0.1        ##\n");
    printf("##                    ##\n");
    printf("##  1. Start Game     ##\n");
    printf("##  2. How to Play    ##\n");
    printf("##  3. Exit           ##\n");
    printf("##                    ##\n");
    printf("########################\n");
    return 0;
}

int print_how_to_play_screen()
{
    printf("#############################\n");
    printf("##                         ##\n");
    printf("##   To Avoid Enemy        ##\n");
    printf("##                         ##\n");
    printf("## Press Space Bar To Jump ##\n");
    printf("##                         ##\n");
    printf("#############################\n");
    return 0;
}

int main() 
{
    print_title_screen();
    int su;
    int go;

    while (1) {  
        printf("게임 메뉴\n");
        printf("1. 게임 시작\n");
        printf("2. 게임 설명\n");
        printf("3. 종료\n");

        printf("선택 : ");
        scanf("%d", &su);

        if (su == 1) {
            printf("게임을 시작합니다.\n");
        } else if (su == 2) 
        {
            print_how_to_play_screen();
            printf("게임 설명\n");
            printf("이 게임은 ... (생략)\n");
            printf("Return to menu? (1.yes 2.no) : ");
            scanf("%d", &go);

            while (go != 1 && go != 2) 
            {
                printf("잘못된 선택입니다. 다시 입력해주세요.\n");
                printf("Return to menu? (1.yes 2.no) : ");
                scanf("%d", &go);
            }

            if (go == 1) 
            {
                continue;  
            } else if (go == 2) 
            {
                printf("게임 설명\n");
                printf("이 게임은 ... (생략)\n");
                printf("Return to menu? (1.yes 2.no) : ");
                scanf("%d", &go);

                while (go != 1 && go != 2) {
                    printf("잘못된 선택입니다. 다시 입력해주세요.\n");
                    printf("Return to menu? (1.yes 2.no) : ");
                    scanf("%d", &go);
                }

                if (go == 1) 
                {
                    continue;  
                } else {
                    break; 
                }
            }
        } else if (su == 3) {
            printf("게임을 종료합니다.\n");
            return 0;
        } else {
            printf("잘못된 선택입니다.\n");
        }
    }

    return 0;
}
