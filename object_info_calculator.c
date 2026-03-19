#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846
/* ================= 2D FUNCTIONS ================= */
void circle() {
    float r;
    printf("Enter radius: ");//radius input from user
    scanf("%f", &r);
    printf("Area: %.2f\n", pi * r * r);
    printf("Circumference: %.2f\n", 2.0f * pi * r);
}

void triangle() {
    float b, h;
    printf("Enter base: ");//base input from user
    scanf("%f", &b);
    printf("Enter height: ");//height input from user
    scanf("%f", &h);
    printf("Area: %.2f\n", 0.5 * b * h);
    printf("Perimeter: %.2f\n", 3.0f * b); // Assuming an equilateral triangle for perimeter calculation
}

void quadrilateral() {
    float a, b, c, d;
    printf("Enter first sides: ");//side input from user
    scanf("%f", &a);
    printf("Enter second sides: ");//side input from user
    scanf("%f", &b);
    printf("Enter third sides: ");//side input from user
    scanf("%f", &c);
    printf("Enter fourth sides: ");//side input from user
    scanf("%f", &d);
    float angle1, angle2;
    printf("Enter two opposite angles (degrees): ");//angle input from user
    scanf("%f %f", &angle1, &angle2);
    float s = (a + b + c + d) / 2.0f;
    float angle_rad = ((angle1 + angle2)/2.0f) * (3.14 / 180.0f);
    float area = sqrtf((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*powf(cosf(angle_rad),2));
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", a+b+c+d);
}

/* ================= 3D FUNCTIONS ================= */
void sphere() {
    float r;
    printf("Enter radius: ");//radius input from user
    scanf("%f", &r);
    printf("Volume: %.2f\n", (4.0f/3.0f)*pi*powf(r,3));
    printf("Surface Area: %.2f\n", 4.0f*pi*powf(r,2));
}

void hemisphere() {
    float r;
    printf("Enter radius: ");//radius input from user
    scanf("%f", &r);
    printf("Volume: %.2f\n", (2.0f/3.0f)*pi*powf(r,3));
    printf("Total Surface Area: %.2f\n", 3.0f*pi*powf(r,2));
    printf("Curved Surface Area: %.2f\n", 2.0f*pi*powf(r,2));
}

void cube() {
    float s;
    printf("Enter side: ");//side input from user
    scanf("%f", &s);
    printf("Volume: %.2f\n", powf(s,3));
    printf("Total Surface Area: %.2f\n", 6.0f*powf(s,2));
}

void cuboid() {
    float l,w,h;
    printf("Enter length: ");//length input from user
    scanf("%f", &l);
    printf("Enter width: ");//width input from user
    scanf("%f", &w);
    printf("Enter height: ");//height input from user
    scanf("%f", &h);
    printf("Volume: %.2f\n", l*w*h);
    printf("Total Surface Area: %.2f\n",
           2.0f*(l*w + w*h + h*l));
    printf("Curved Surface Area: %.2f\n",
           2.0f*h*(l+w));
}

void cylinder() {
    float r,h;
    printf("Enter radius: ");//radius input from user
    scanf("%f", &r);
    printf("Enter height: ");//height input from user
    scanf("%f", &h);
    printf("Volume: %.2f\n", pi*r*r*h);
    printf("Total Surface Area: %.2f\n",
           2.0f*pi*r*(r+h));
    printf("Curved Surface Area: %.2f\n",
           2.0f*pi*r*h);
}

void cone() {
    float r,h;
    printf("Enter radius: ");//radius input from user
    scanf("%f", &r);
    printf("Enter height: ");//height input from user
    scanf("%f", &h);
    float slant = sqrtf(r*r + h*h);
    printf("Volume: %.2f\n",
           (1.0f/3.0f)*pi*r*r*h);
    printf("Total Surface Area: %.2f\n",
           pi*r*(r+slant));
    printf("Curved Surface Area: %.2f\n",
           pi*r*slant);
}

/* ================= MAIN PROGRAM ================= */

int main() {
    int main_choice, shape_choice;
    do {
        printf("\n====== MAIN MENU ======\n");// default menu for user to choose between 2D and 3D shapes
        printf("1. 2D Shapes\n");
        printf("2. 3D Shapes\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &main_choice);

        switch(main_choice) {

        case 1:
            printf("\n-- 2D Shapes --\n");
            printf("1. Circle\n2. Triangle\n3. Quadrilateral\n");
            printf("Enter choice: ");
            scanf("%d", &shape_choice);

            switch(shape_choice) {
                case 1: circle(); break;
                case 2: triangle(); break;
                case 3: quadrilateral(); break;
                default: printf("Invalid choice!\n");
            }
            break;

        case 2:
            printf("\n-- 3D Shapes --\n");
            printf("1. Sphere\n2. Hemisphere\n3. Cube\n4. Cuboid\n5. Cylinder\n6. Cone\n");
            printf("Enter choice: ");
            scanf("%d", &shape_choice);

            switch(shape_choice) {
                case 1: sphere(); break;
                case 2: hemisphere(); break;
                case 3: cube(); break;
                case 4: cuboid(); break;
                case 5: cylinder(); break;
                case 6: cone(); break;
                default: printf("Invalid choice!\n");
            }
            break;

        case 0:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while(main_choice != 0);

    return 0;
}