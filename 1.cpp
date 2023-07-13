#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
 
void getcoef   (char s []) 
{
    int ch = -1;
    for (int i = 0; (ch = getchar()) != '\n'; i++) {
        s[i] = ch;
    }
}

int main() 
{ 
    const int MAXLINE = 1000;
    char coefa [MAXLINE] = ""; getcoef(coefa);
    char coefb [MAXLINE] = ""; getcoef(coefb);
    char coefc [MAXLINE] = ""; getcoef(coefc);
    double coef_a = atof(coefa);
    double coef_b = atof(coefb);
    double coef_c = atof(coefc); 
    double d = pow(coef_b, 2)-4*coef_a*coef_c;
    if (coef_a) { 
            if (d > 0) 
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
