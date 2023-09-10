#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};


int main(){
    
    int num;
    double dx, dy;
    printf("Number of Points: ");
    scanf("%d", &num);
    struct Point p[num+1];

    for(int i=0;i<num;i++){
        printf("P%d.X: ", i+1);
        scanf("%lf", &p[i].x);
        printf("P%d.Y: ", i+1);
        scanf("%lf", &p[i].y);
    }
    printf("Length:\n");
    
    for(int i=0;i<num-1;i++){
        dx = pow((p[i+1].x - p[i].x), 2);
        dy = pow((p[i+1].y - p[i].y), 2);
        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n", 
                i+1, p[i].x, p[i].y, i+2, p[i+1].x, p[i+1].y, sqrt(dx+dy));
    }
}