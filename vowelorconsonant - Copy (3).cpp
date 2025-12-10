#include <stdio.h>

int main() {
    char ch;
    
    // Read the character
    scanf("%c", &ch);
    
    // Check for vowels (both uppercase and lowercase)
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("VOWEL
");
    } else {
        printf("CONSONANT
");
    }
    
    return 0;
}
