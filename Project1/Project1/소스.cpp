#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t�������� �ູ�� VC++\n");
    Sleep(3000);
    system("cls");
    char c;


    while (1) {
        printf("command> ");
        c = _getch();
        if (c == 27) {
            return 0;
        }

        // ��ɾ� ó��
        switch (c) {
        case 'q':
            printf("p\nqwer ȭ����\n");
            break;
        case 'w':
            printf("w\n���� �ʹ� ����\n");
            break;
        case 'e':
            printf("e\n���ֺ��� ������ 3���\n");
            break;
        case 'r':
            printf("r\n�ູ�մϴ�.\n");
            break;
        default:
            printf("�߸��� ����Դϴ�.\n");
            break;
        }
    }

    return 0;
}
