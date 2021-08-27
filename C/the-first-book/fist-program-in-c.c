#include<stdio.h>

// int main () {
//     printf("Hello Word!\n");
//     return 0;
// }

/* print Fahrenheit-Celsius Table 
        for fahr = 0, 20, ..., 300
*/
// int main () {

    // float fahr, celsius;
    // int lower, upper, step;

    // lower = 0;     // lower limit of temperature table  
    // upper = 300;   // upper limit  
    // step = 20;     // step size
    
    // fahr = lower; 
    // while (fahr <= upper) {
    //     celsius = (5.0 / 9.0) * (fahr - 32.0);
    //     printf("%3.0f %6.1f\n", fahr, celsius);
    //     fahr = fahr + step;
    // }

//}

// Celsius to fahrenheit table

// int main () {

    // float fahr, celsius;
    // int lower, upper, step;

    // lower = 0; 
    // upper = 100;
    // step = 20;

    // celsius = lower;
    // while (celsius <= upper) {
    //     fahr = ((9.0/5.0) * celsius) + 32;
    //     printf("%6.1f %3.1f\n", celsius, fahr);
    //     celsius = celsius + step;
    // }

//}

// Variation of Fahrenheit-Celsius table 

// #define LOWER 0         // lower limit of temperature table  
// #define UPPER 300       // upper limit 
// #define STEP 20         // step size

// int main() {

//     int fahr;

//     for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
//         printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
// }

// Variation of Fahrenheit-Celsius table in reverse order 

// int main() {

//     int fahr;

//     for (fahr = 300; fahr >= 0; fahr = fahr - 20)
//         printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
// }




