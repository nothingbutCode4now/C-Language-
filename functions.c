
#include <stdio.h>
#include <string.h>
void work(char arr[],int ar_len){

    printf("%s",arr);

}
int main(){
  char str[] = "abcdefgh";
  work(str,strlen(str));
}
