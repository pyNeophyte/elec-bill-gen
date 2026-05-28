#include <stdio.h>
#include <assert.h>

int main(void) {
    printf("Enter reading of last month (in kWh): ");
    float last = 0;
    assert(scanf("%f", &last));
    
    printf("Enter reading of this month (in kWh): ");
    float curr = 0;
    assert(scanf("%f", &curr));
    
    float consumed = curr - last;
    assert(consumed >= 0.f);
    
    float tariff = 10;
    if (consumed <= 100)
        tariff = 5;
    else if (consumed <= 200)
        tariff = 7;
    
    printf("Your electricity bill is: %.2f\n", tariff * consumed);
    return 0;
}