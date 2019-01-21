#include <stdio.h>
int main() {
    int answer;

    printf("What is 10 + 3?\n");
    scanf("%d", &answer);
    if (answer == 13) {
        printf("Good job")
        return 0
    } else {
        printf("Not quite")
        return 1
    }
}
