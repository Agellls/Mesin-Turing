#include <stdio.h> 
#include <string.h>
 
int dfa = 0; 
   
void S(char c) 
{ 
    if ( c == 'a' ) 
        dfa = 1; 
    else
        dfa = 0;  
} 
   
void Stata1(char c) 
{ 
    if (c == 'b' ) 
        dfa = 2; 
    else
        dfa = 1;
} 
   
void Stata2(char c) 
{ 
    if (c == 'a' ) 
        dfa = 1;
    else
        dfa = 2;
} 
   
int diterima(char str[]) 
{ 
    int i, len = strlen(str); 
   
    for ( i=0; i < len; i++) { 
            if (dfa == 0) 
                S(str[i]); 
   
            else if (dfa == 1) 
                Stata1(str[i]); 
   
            else if (dfa == 2) 
                Stata1(str[i]); 
   
            else
                return 0; 
    } 
    if(dfa == 2) 
        return 1; 
    else
        return 0; 
} 
 
int main() 
{ 
    char str[10]; 
    printf("Masukan Kalimat: ");
    gets(str);
    if (diterima(str)) 
        printf("\nDiterima\n"); 
    else
        printf("Ditolak\n"); 
    return 0; 
} 
