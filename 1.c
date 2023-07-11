#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#define MAXLINE 1000
 
void getcoef   (char s []) {
    int ch;
    for (int i = 0; (ch = getchar()) != '\n'; i++) {
        s[i] = ch;
    }
}

int main() { 
    char coef1 [MAXLINE] = ""; getcoef(coef1);
    char coef2[MAXLINE] = ""; getcoef(coef2);
    char coef3[MAXLINE] = ""; getcoef(coef3);
    double coef_a = atof(coef1);
    double coef_b = atof(coef2);
    double coef_c = atof(coef3); 
    double d = pow(coef_b, 2)-4*coef_a*coef_c;
    if (coef_a) { 
            if (d>0) 
                printf("2 razlichnyh kornya: %.8g %.8g\n", (-coef_b-sqrt(d))/(2*coef_a), (-coef_b+sqrt(d))/(2*coef_a)); 
            else if (d==0) 
                printf("1 koren': %.8g\n",-coef_b/(2*coef_a)); 
            else 
                printf("net norm korney\n"); 
    } 
    else {
        if (coef_b) {
            printf("1 koren': %.8g\n", -coef_c/coef_b);
        }
        else 
            if (coef_c)
                printf("net korney\n");
            else
                printf("dohera korney\n");
    }
    return 0; 
}
