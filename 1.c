#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
 
int main(void) 
{ 
    int ch,i=0; char s1 [1000]; char s2[1000]; char s3[1000]; 
    while ((ch=getchar())!='\n') 
    { 
        s1[i++]=ch; 
    } 
    s1[i]='\0'; 
    i=0; 
    while ((ch=getchar())!='\n') 
    { 
        s2[i++]=ch; 
    } 
    s2[i]='\0'; 
    i=0; 
    while ((ch=getchar())!='\n') 
    { 
        s3[i++]=ch; 
    } 
    s3[i]='\0'; 
double a,b,c,d; 
a=atof(s1); b=atof(s2); c=atof(s3); 
d=b*b-4*a*c; 
    if (a) 
    { 
            if (d>0) 
                printf("2 razlichnyh kornya: %.8g %.8g", (-b-sqrt(d))/(2*a), (-b+sqrt(d))/(2*a)); 
            else if (d==0) 
                printf("1 koren': %.8g",-b/(2*a)); 
                else 
                printf("net norm korney"); 
    } 
    else 
    printf("eto ne kvadratnoe"); 
    return 0; 
}
