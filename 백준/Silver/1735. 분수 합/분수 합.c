#include <stdio.h>

int Euclidean(int a, int b){
    int r = a % b;
    if(r == 0){
        return b;
    }
    return Euclidean(b, r);
}

int main(){
    int a,b;
    int c,d;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    int tmp1 = (a * d) + (c * b);
    int tmp2 = b * d;
    
    int euclidean = Euclidean(tmp1, tmp2);
    printf("%d %d", tmp1 / euclidean, tmp2 / euclidean);
}