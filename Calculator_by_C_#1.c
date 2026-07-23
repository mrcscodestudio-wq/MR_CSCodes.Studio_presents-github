// Calculator
#include <stdio.h>
int main(){
    
    // Calculator without scanf()

    int a = 14;
    int b = 16;
    int c = 55;

    printf("%d\n",a + b);
    printf("%d\n",a + b + c);
    printf("%d\n",a - b);
    printf("%d\n",a - b - c);
    printf("%d\n",a + b - c);
    printf("%d\n",a - b + c);
    printf("%d\n",a * b );
    printf("%d\n",a * b * c);
    printf("%d\n",a + c);
    printf("%d\n",a - c);
    printf("%d\n",a * c);
    
    float e = 14.88;
    float h = 55.77;

    printf("%f\n",e + h);
    printf("%f\n", e - h);
    printf("%f\n",e * h);
    printf("%f\n", e / h);

    //square
    float s_square = 18;
    float s_square_area = s_square * s_square;
    
    printf("%f\n",s_square_area);

    //rectangle 
    float rec_s_one = 19;
    float rec_s_two = 33;
    float rec_area = rec_s_one * rec_s_two;

    printf("%f\n",rec_area);

    //cube
    float s_c = 60;
    float v_c = s_c * s_c * s_c;

    printf("%f\n",v_c);

    //cuboid 
    float s_cu_o = 40;
    float s_cu_t = 70;
    float s_cu_th = 88;
    float v_cu = s_cu_o * s_cu_t * s_cu_th;

    printf("%f\n",v_cu);

    //triangle 
    float ba_t = 33;
    float he_t = 44;
    float bh_t = ba_t * he_t;
    float a_t = bh_t / 2;

    printf("%f\n",a_t);



    return 0;
}
