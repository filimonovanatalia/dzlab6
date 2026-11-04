#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double x, y;
    printf("Введите координаты точки x и y через пробел: ");
    scanf("%lf %lf", &x, &y);

    if (y >= 0 && (x * x + y * y <= 36.0) && !(x >= 0 && (x * x + y * y <= 9.0))) {
        printf("Точка (%.2f, %.2f) ПРИНАДЛЕЖИТ заштрихованной области.\n", x, y);
    }
    else {
        printf("Точка (%.2f, %.2f) НЕ ПРИНАДЛЕЖИТ заштрихованной области.\n", x, y);
    }
    return 0;
}