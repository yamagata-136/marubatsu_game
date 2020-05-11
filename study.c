/**************************/
/*3*3マスの〇✖ゲームを作る*/
/*************************/
#define _CRT_SECURE_NO_WARNINGS //scanfを使用するため
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*定数*/
#define HEIGHT 3
#define WIDTH 3
/*プロトタイプ宣言*/
void init_field();
char select();
void set(int);
void print_field();

/*グローバル変数宣言*/
char Field[HEIGHT][WIDTH];
int cnt = 0;

int main() {
    char judge;
    int num;
    init_field();

    /*9マス埋まったら終了*/
    while (cnt < 9)
    {
        judge = select();
        system("cls");

        if (judge != '0')
        {
            num = judge - '0';
            set(num);
            print_field();
        }
        else
        {
            print_field();
        }

        //system("cls");
    }
}
/************************************
フィールドの初期化
************************************/
void init_field() {
    int i, j;
    for (i = 0; i < WIDTH; i++)
    {
        for (j = 0; j < HEIGHT; j++)
        {
            Field[i][j] = '*';
        }
    }
}
/***********************************
場所の選択
************************************/
char select() {
    char num = '0', result;
    char dummy;
    puts("1～9の数字を入力してください");

    scanf("%c", &num);
    scanf("%c", &dummy);/*改行対策*/
    if ('0' < num && num <= '9')
    {
        result = num;
    }
    else
    {
        puts("無効な入力です");
        result = '0';
    }
    return result;
}
/***************************************
フィールドにセットする
****************************************/
void set(int num) {
    switch (num) {
    case 1:
        if (Field[0][0] == '*') {
            Field[0][0] = 'O';
            cnt++;
        }
        else
        {
            puts("すでに入力済みのマスです");
        }
        break;
    case 2:
        if (Field[0][1] == '*') {
            Field[0][1] = 'O';
            cnt++;
        }
        else
        {
            puts("すでに入力済みのマスです");
        }
        break;
    case 3:
        if (Field[0][2] == '*') {
            Field[0][2] = 'O';
            cnt++;
        }
        else
        {
            puts("すでに入力済みのマスです");
        }
        break;
    case 4:
        if (Field[1][0] == '*') {
            Field[1][0] = 'O';
            cnt++;
        }
        else
        {
            puts("すでに入力済みのマスです");
        }
        break;
    case 5:
        if (Field[1][1] == '*') {
            Field[1][1] = 'O';
            cnt++;
        }
        else
        {
            puts("すでに入力済みのマスです");
        }
        break;
    case 6:
        if (Field[1][2] == '*') {
            Field[1][2] = 'O';
            cnt++;
        }
        else
        {
            puts("すでに入力済みのマスです");
        }
        break;
    case 7:
        if (Field[2][0] == '*') {
            Field[2][0] = 'O';
            cnt++;
        }
        else
        {
            puts("すでに入力済みのマスです");
        }
        break;
    case 8:
        if (Field[2][1] == '*') {
            Field[2][1] = 'O';
            cnt++;
        }
        else
        {
            puts("すでに入力済みのマスです");
        }
        break;
    case 9:
        if (Field[2][2] == '*') {
            Field[2][2] = 'O';
            cnt++;
        }
        else
        {
            puts("すでに入力済みのマスです");
        }
        break;
    }
}
/******************************
フィールドを出力する
*******************************/
void print_field() {
    int i, j;
    for (i = 0; i < WIDTH; i++)
    {
        for (j = 0; j < HEIGHT; j++)
        {
            printf("%c", Field[i][j]);
        }
        printf("\n");
    }

}