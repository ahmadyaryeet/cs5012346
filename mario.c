#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int m = get_pyramid_int("Pyramid: ");
    printf("%m\n", m);
    
}

int get_pyramid_int(string prompt);
     {
    int m;
    do
    {
        m = get_int("%s", prompt)
    }
    while (m >= 1) and (m <= 8);
    return m;
    }
    
    
    
    
    
    
    
    
    
