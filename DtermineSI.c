#include<stdio.h>
/*function declaration*/
float simple(float principle,float rate,float time);
/*function defination*/
float simple(float principle,float rate,float time)
{
    float SI;
    SI = (principle*rate*time);
    return SI;
}

int main()
{
    float equity,kcb,baclays,tala;
    /*function call*/
    equity = simple(100000,0.2,2.5);
    kcb =simple(100000,0.075,2.5);
    baclays=simple (100000,0.35,2.5);
    tala =simple(100000,0.90,2.5);
    printf("Equity bank:%f\nKCB bank:%f\nBACLAYS bank:%f\nTala bank:%f\n",equity,kcb,baclays,tala);
    return 0;
}
