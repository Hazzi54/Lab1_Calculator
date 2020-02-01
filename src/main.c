#include "func.h"

int main() {
    struct comp_num a, b, c;
    char act;

    printf("\E[H\E[J");
    printf("1. Add\n");
    printf("2. Sub\n");
    printf("3. Mul\n");
    printf("4. Div\n");
    printf("5. Quit\n");

    while(act != '5') {
        act = getc(stdin);
        switch(act) {
            case '1': 
                printf("Enter a:\n");
                scanf("%f%f", &a.real, &a.image);
                printf("Enter b:\n");
                scanf("%f%f", &b.real, &b.image);

                c = Add(a, b);
                printf("\na + b = %f, %fi\n", c.real, c.image);
                break;
            
            case '2': 
                printf("Enter a:\n");
                scanf("%f%f", &a.real, &a.image);
                printf("Enter b:\n");
                scanf("%f%f", &b.real, &b.image);

                c = Sub(a, b);
                printf("\na - b = %f, %fi\n", c.real, c.image);
                break;
            
            case '3': 
                printf("Enter a:\n");
                scanf("%f%f", &a.real, &a.image);
                printf("Enter b:\n");
                scanf("%f%f", &b.real, &b.image);

                c = Mul(a, b);
                printf("\na * b = %f, %fi\n", c.real, c.image);
                break;
            
            case '4': 
                printf("Enter a:\n");
                scanf("%f%f", &a.real, &a.image);
                printf("Enter b:\n");
                scanf("%f%f", &b.real, &b.image);

                c = Div(a, b);
                printf("\na / b = %f, %fi\n", c.real, c.image);
                break;
            
            default: 
                break;
        }
    }
    return 0;
}
