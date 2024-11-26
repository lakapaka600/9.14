#include <stdio.h>
float perpendicolare(float m1,float m2) {
    if(m1>0) {
        if(m1==-1/m2){
            return 1;
        }
        else {
            return 0;
    }
    }
    else {
        if(m1==1/m2){
            return 1;

}
        else {
            return 0;
}
    }
}



int main(void)
{
    float m1;
    float m2;
    printf("inserisci m1:");
    scanf("%f",&m1);
    printf("inserisci m2:");
    scanf("%f",&m2);
    if(perpendicolare(m1,m2)==1) {
        printf("perpendicolare");
    }
    else {
        printf("perpendicolare");
    }


    return 0;
}
