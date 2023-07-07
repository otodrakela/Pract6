#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
double calculateVectorLength(int x1, int y1, int x2, int y2) {
    int deltaX = x2 - x1;
    int deltaY = y2 - y1;
    double length = sqrt(deltaX * deltaX + deltaY * deltaY);
    return length;
}

int main() {
    SetConsoleOutputCP(1251);
    int x1, y1, x2, y2;
    printf("¬вед≥ть координати початку вектора (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("¬вед≥ть координати к≥нц€ вектора (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    double vectorLength = calculateVectorLength(x1, y1, x2, y2);
    printf("ƒовжина вектора: %.6f\n", vectorLength);

    return 0;
}
