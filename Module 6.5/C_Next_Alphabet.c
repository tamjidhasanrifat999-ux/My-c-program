#include <stdio.h>

int main() {
    char s[4];         
    if (scanf("%3s", s) != 1) return 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'z') s[i] = 'a';
        else if (s[i] >= 'a' && s[i] <= 'y') s[i] = s[i] + 1;
        
    }

    printf("%s", s);
    return 0;
}