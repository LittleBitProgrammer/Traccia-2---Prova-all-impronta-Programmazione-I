//
//  main.c
//  Prova impronta nr 2
//
//  Created by Roberto Vecchio on 10/02/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

#include <stdio.h>
#include <math.h>

typedef struct point{
    double x;
    double y;
}point_struct;

point_struct points[] = {
    {2,3},
    {3,4},
    {1,3},
    {1,8},
    {5,6},
    {9,6}
};

double calculateDistance(point_struct,point_struct);
void indexMinimumDistance(point_struct *, int);

int main(int argc, const char * argv[]) {
    int array_size = sizeof(points) / sizeof(points[0]);
    indexMinimumDistance(points, array_size);
    return 0;
}





double calculateDistance(point_struct point_one, point_struct point_two){
    return sqrt(pow(point_two.x - point_one.x, 2) + pow(point_two.y - point_one.y, 2));
}

void indexMinimumDistance(point_struct *points, int array_size){
    int i,j;
    int point_one = -1, point_two = -1;
    double distance, minimum_distance;
    
    minimum_distance = calculateDistance(points[0], points[1]);
    
    for (i = 0; i < array_size - 1; i++) {
        for (j = i + 1; j< array_size; j++) {
            
            distance = calculateDistance(points[i], points[j]);
            
            if (distance < minimum_distance) {
                minimum_distance = distance;
                point_one = i;
                point_two = j;
                
            }
        }
    }
    printf("gli indici dei punti la cui distanza è minore sono : |%d|%d|\n",point_one,point_two);
    
}
