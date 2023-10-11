#include <stdio.h>
#include <cs50.h>

int main() {
    string username = get_string("Enter your name:\n");
   printf("Hello, %s!", username);
   return 0;
}