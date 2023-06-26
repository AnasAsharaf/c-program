#include <stdio.h>

unsigned int reverseNibbles(unsigned int num) {
    // Extracting the left and right nibbles
    unsigned int leftNibble = (num & 0xF0) >> 4;   // Masking the left nibble and shifting it to the right
    unsigned int rightNibble = (num & 0x0F) << 4;  // Masking the right nibble and shifting it to the left
    
    // Combining the reversed nibbles
    unsigned int reversedNum = leftNibble | rightNibble;  // Combining the reversed nibbles
    
    return reversedNum;
}

int main() {
    unsigned int input = 0x12394578;
    
    // Reversing the nibbles
    unsigned int output = reverseNibbles(input);
    
    printf("Input: 0x%08X\n", input);
    printf("Output: 0x%08X\n", output);
    
    return 0;
}
