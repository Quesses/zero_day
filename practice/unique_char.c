#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int characters_count(const char *s)
{
    int n = 0;
    int count[128] = {0};
    if (NULL == s)
    {
        return -1;
    }
    while(*s != '\0')
    {
        if (!count[*s])
        {
            count[*s]++;
            n++;
        }
        s++;
    }

    return n;
}

int CountUniqueCharacters(char* str){
    int count = 0;

    for (int i = 0; i < strlen(str); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }

         if (!appears){
             count++;
         }
    }

    return count;
}

int main() {
	int cnt = CountUniqueCharacters("abcdefgd444hiak3bcgh1fcedi");
	printf("%d\n", cnt);
	putchar('\n');
	cnt = characters_count("abcdefg1dhi3ab444cghfcedki");
	printf("%d\n", cnt);

	return 0;
}
