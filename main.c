/*статическая библиотека калькулятор*/
#include <stdio.h>
#include <locale.h>

#include "Functions.h"
int main(){
    setlocale(LC_ALL,"Russian"); 
    int a,b;
    int input = -1;
    while(input){
       
        printf("Выберите операцию:\n");
        printf("1 - прибавление\n");
        printf("2 - вычетание\n");
        printf("3 - умножение\n");
        printf("4 - деление\n");
        printf("5 - выход\n");
	scanf("%d%*c",&input);
	
	if(input != 5){
	printf("Введите 2 числа,над которыми будут осуществлятся операции\n");
        scanf("%d%*c",&a);
        scanf("%d%*c",&b);
        }

        switch(input){
            case 1: add(a,b);
                break;
	    case 2: sub(a,b);
	        break;
	    case 3: mult(a,b);
	        break;
	    case 4: div(a,b);
	        break;
	    case 5: input = 0;
	        break;
            default:printf("Неправильно введина опирация\n"); 
         }
    }
    return 0;
}


