 #include<stdio.h>
 #include<math.h>
 float Quadratic(float A,float B,float C,float Root1,float Root2,float Disc,float Root);
 float Quadratic(float A,float B,float C,float Root1,float Root2,float Disc,float Root)
 {
    Disc =(B * B )- (4 * A * C);
             Root1 = (-B + sqrt (Disc)) / (2.0* A );
             Root2 = (-B - sqrt (Disc))  / (2.0* A );

             if(Root1==Root2)
             {
                 printf("Root=%.2f\n",Root1);
             }
             else if(Disc<0)
             {
                 printf("Complex Roots!\n");
             }
             else
             {
                 printf("Root 1=%.2f\n Root 2=%.2f\n",Root1, Root2);
             }
             return Root1,Root2;
}
int main()
{ float Toot,A,B,C;
    printf("Enter the roots of the Equation.\n");
    scanf("%f%f%f", &A,&B,&C);
    Toot = Quadratic(A,B,C);
    printf("The roots are %d %d",Toot);

}
