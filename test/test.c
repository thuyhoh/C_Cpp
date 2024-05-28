#include <stdio.h>
#include <string.h>
#include <stdint.h>


// init function
void set_led(uint8_t led, uint8_t status);
void ktr(char *buff);   

char buff[50] = "led_on: 208, 3, 0. led_off: 4, 5, 6, 7\n";

void ktr(char *buff)
{
    uint8_t status;
    uint16_t i = 0;
    uint8_t tmp = 0;
    uint8_t f = 0;
    while(i < strlen(buff))
    {
        if(strncmp((buff+i), "led_on",strlen("led_on")) == 0)
        {
            printf("led on\n");
            i +=  strlen("led_on"); 
            status = 1; 
        }
        else if(strncmp((buff+i), "led_off",strlen("led_off")) == 0)
        {
            printf("led off\n");
            i += strlen("led_off");
            status = 0;
        }
        else
        {
            if(*(buff + i) <= '9' && *(buff + i) >= '0')
            {
                tmp = tmp*10 + (*(buff + i) - '0');
                f = 1;
            }
            else if(f == 1 )
            {
                set_led(tmp,status);
                tmp = 0;
                f = 0;
            }
            i++;
        }
    }
}

void set_led(uint8_t led, uint8_t status)
{
    
}

int main(void)
{
    printf("%d",1<<1);
    return 0;
}