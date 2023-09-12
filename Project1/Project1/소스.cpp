#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t정세운의 행복한 VC++\n");
    Sleep(3000);
    system("cls");
    char c;


    while (1) {
        printf("command> ");
        c = _getch();
        if (c == 27) {
            return 0;
        }

        // 명령어 처리
        switch (c) {
        case 'q':
            printf("p\nqwer 화이팅\n");
            break;
        case 'w':
            printf("w\n과제 너무 좋다\n");
            break;
        case 'e':
            printf("e\n담주부턴 과제량 3배다\n");
            break;
        case 'r':
            printf("r\n행복합니다.\n");
            break;
        default:
            printf("잘못된 명령입니다.\n");
            break;
        }
    }

    return 0;
}
