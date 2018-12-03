#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    float x,y,a,b,t;

    printf("Vvedite x=");
    scanf("%i",&x);

    for (x=0;x<3;x+=0.15)

    {

           if (x<1)

            {
                y=log10(t);
                printf("\n<1 ----> t=%g",t);
            }



           if((x<=1)&&(x<=2))
            {
                y=a*pow(x,2)*log(x);
                printf("\n(x<=1)&&(x<=2)------>a=%g x=%g",a,x);
            }


           if(x>2)
            {
                y=exp(a*x)*cos(x)*b;
                printf("\n>2 ------> a*x=%g x=%g b=%g",x,b,a*x);
            }




    }


}
