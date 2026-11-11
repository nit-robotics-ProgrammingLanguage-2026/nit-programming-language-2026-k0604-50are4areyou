#include <stdio.h>
int main(void){
    int in;
    long total = 0;
    scanf("%d", &in);
    if(in<0){
        printf("NG");
        return 0;
    } for(int out = 1 ; out <= in ; out++){
        if(out % 3 == 0 || out % 5 == 0)continue;
        total += out;
    } printf("%ld", total);
    return 0;
}
