#include <stdio.h>

int main()
{
    //r, w, a, - text mode
    //b, +
    //b - binary => rb,wb,ab
    //+ - if file does not exist - create that file
    char user_input[256];
    int flag;
    scanf("%[^\n]%*c",user_input);
    printf("%s ",user_input);
    
    //FILE *flpntr = fopen("user_input.txt","w+");
    //fprintf(flpntr,"%s",text);
    //fclose(flpntr);
}