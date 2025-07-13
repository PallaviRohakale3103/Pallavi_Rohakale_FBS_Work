#include <stdio.h>
struct Time
{
    int hour;
    int minute;
    int second;
};
int main() {
    struct Time t;

    printf("Enter hour (0-23): ");
    scanf("%d", &t.hour);

    printf("Enter minute (0-59): ");
    scanf("%d", &t.minute);

    printf("Enter second (0-59): ");
    scanf("%d", &t.second);
    printf("\nEntered Time: %02d:%02d:%02d\n", t.hour, t.minute, t.second);
    return 0;
}
