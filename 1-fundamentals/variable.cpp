#include <cstdio>

int main() {

    double price = 99.8;
    double tax = 0.08;

    double finalPrice = price * (1 + tax);

    printf("The final price is %.2f", finalPrice);

    return 0;

}