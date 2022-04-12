#include <stdbool.h>
#include<stdbool.h>
#include<stdio.h>
bool IsLegal(char s[]){
    int i=0;
    int j=0;
    int k=0;
    while (s[i]!='\0')
    {   
        switch(s[i]){
            case 'I':j++;break;
            case 'O':k++;
        if(k>j)
        return false;
        }
        i++;
    }
    return (j==k? true:false);
}
int main(){
    char s[]="IIIIIOOOOOO";
    printf("%d\n",IsLegal(s));
}