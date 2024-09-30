#include <stdio.h>

int main() {
    // Print the header for background colors
    printf("         ");
    for (int b = 0; b <= 7; b++) {
        printf("   4%dm", b);
    }
    printf("\n");

    // Foreground colors and styles
    const char *foregrounds[] = {"", "30", "31", "32", "33", "34", "35", "36", "37"};
    const char *styles[] = {"", "1;"};

    // Loop through foreground colors and styles
    for (int f = 0; f < 9; f++) {
        for (int s = 0; s < 2; s++) {
            // Print foreground style and color code
            printf("%4sm", styles[s]);
            printf(" \033[%s%sm%s\033[0m", styles[s], foregrounds[f], "gYw ");
            
            // Loop through background colors
            for (int b = 0; b <= 7; b++) {
                printf(" \033[4%d;%s%sm%s\033[0m", b, styles[s], foregrounds[f], " gYm ");
            }
            printf("\n");
        }
    }

    return 0;
}
