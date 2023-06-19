/*******************************************
 * main.c -- file chạy của chương trình máy
 *      tính 4 chức năng cơ bản 
 * 
 * PURPOSE: 
 *      - tổng quan: 
 *      - cụ thể: 
 * 
 * STATUS: 
 *      - [ ]: code chưa hoàn thiện 
 *      - [x]: code hoàn thành mục đích 
 *      - [ ]: code gặp lỗi tại dòng 
 *              Ghi chú lỗi      
 * 
 * SOURCE: Practical C book 
 * 
 * DEBUG_NUMBER: 
 *      - PROGRAM: 
 *      - FUNCTION: 
 * 
**********************************************/
/******************************************
 * MAJOR ALGORITHM
 * loop 
 *      đọc dấu và 2 số của phép tính 
 *      tính toán kết quả
 *      hiển thị kết quả
 * end-loop
 * 
*******************************************/
#include <stdio.h>
#include "setting.h"

int num1, num2; /* 2 number of expression */
char operator; /* operator of expression */
int result; /* result of expression */
char line[100]; /* input line */

int main(void) {
    result = 0; /* initialize result */
    
    while(1) {
        printf("Result: %d\nEnter your expression: ", result); 
        fgets(line, sizeof(line), stdin);int status = sscanf(line, "%d %c %d", &num1, &operator, &num2); 
        
        if (status == 3) { /* if enter rightfully */
            if (operator == 'q') {
                break; /* exit program */
            } else if (operator == '-') {
                result = num1 - num2; 
            } else if (operator == '*') {
                result = num1 * num2; 
            } else if (operator == '/') {
                if (num2 == 0) { /* if divide by 0 */
                    printf("Math error!\n"); 
                    result = 0; 
                } else {
                    result = num1 / num2; 
                }
            } else if (operator == '+') {
                result = num1 + num2; 
            } else {
                printf("Unknown operator '%c'\n", operator); 
                result = 0; 
            }
        } else {
            printf("!Error input!\n"); 
            result = 0; 
        }


    }

}

