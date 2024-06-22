#include <stdio.h>
#include <string.h>

void printcs(char c){
    printf("%c ",c);
}
void printus(char unsigned c){
    int cc=0;
    if(c<32){
        cc=0;
        c=c+194;
    }else{
        c=c-128;
        
        cc=1+c/32;
        c=c & 31;
        c=c+194;
    }
    printf("%c%c ",c,(unsigned char)128+cc);
}
int main(){
    char unsigned a=0;
    int count=0;
    char unsigned c=0;
    printf("\e[43;37m\n");
    for(a=0;a<254;a++){
        c=a;
        if(c<32 || a>126){
            printus(c);
        }else{
            printcs(c);
        }
        count++;
        if (count>15)count=0;
        if (count==0)printcs(10);
    }
    return 0;
}
