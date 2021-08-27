#include <stdio.h> 

/* copy input to output; 1st version */

// int main () {
    
//     int c;

//     c = getchar();
//     while (c != EOF) {
//         putchar(c);
//         c = getchar();
//     }
// }

/* copy input to output; 2nd version */

// int main () {

//     int c;

//     while ((c = getchar()) != EOF) {
//         putchar(c);
//     }
    
// }

/* Exercises */

// int main () {

//     char value;
//     int c;

//     value = ((c = getchar()) != EOF); // value = 1
//     printf("%i\n", value);
//     return 0;  

// }

// int main() {

//     char value;
//     int c;

//     value = EOF;             // value = -1
//     printf("%i\n", value); 
// }

/* count characters in input; 1st version */

// int main() {

//     long nc;

//     nc = 0;
//     while (getchar() != EOF) 
//         ++nc;
//     printf("%ld\n", nc);

// }

/* count characters in input; 2nd version */

// int main() {

//     double nc;
    
//     for (nc = 0; getchar() != EOF; ++nc)
//         ;
//     printf("%.0f\n", nc);
// }

/* count lines in input */

// int main() {

//     int c, nl;

//     nl = 0;
//     while ((c = getchar()) != EOF)
//         if (c == ´\n´)
//             ++nl;
//     printf("%d\n", nl);
// }