#include <stdio.h>
int main() 
{
    int choice;
    float r,l,b,s;
    float area,perimeter;

    printf("Select any one choise from the following\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice:\n ");
    scanf("%d", &choice);

if(choice==1)
{
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    area = 3.14*r*r;
    perimeter = 2*3.14*r;
    printf("Area is:%.2f",area);
    printf("\nPerimeter is:%.2f",perimeter);
}
else if(choice==2)
{
    printf("Enter the side of the square:");
    scanf("%f",&s);
    area = s*s;
    perimeter = 4*s;
    printf("Area is:%.2f",area);
    printf("\nPerimeter is:%.2f",perimeter);
}
else if(choice==3)
{
    printf("Enter the length and breadth of the rectangle:");
    scanf("%f%f",&l,&b);
    area = l*b;
    perimeter = 2*(l+b);
    printf("Area is:%.2f",area);
    printf("\nPerimeter is:%.2f",perimeter);

}
else
{
    printf("invalid number");
}
return 0;

}