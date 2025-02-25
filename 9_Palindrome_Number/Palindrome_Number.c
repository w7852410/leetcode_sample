/*
Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int x) {
    if (x==0) return true;
    if (x<=0) return false;
    long temp = 0,y = 0;  //反轉可能溢位
    y = x;
    while(y!=0){
        temp = temp *10 + y % 10;
        y = y / 10;
    }
    if (temp == x) return true;

    return false;
}
int main(void){
    int a = 121;
    int b = -121;
    int c = 10;
    printf("121 => is %d\n",isPalindrome(a));
    printf("-121 => is %d\n",isPalindrome(b));
    printf("10 => is %d\n",isPalindrome(c));
    return 0;
}