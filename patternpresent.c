#include <stdio.h>
#define MAXLINE 1000

int getline(char , int);
bool checker(char , char);

char ptrn[] = "ould";

void main(){
  char s[MAXLINE];
  while(getline(s,MAXLINE)>0){
    if(checker(s,ptrn)){
      printf("%s",s);
    }
  }
}

int getline(char s[], int lim){
  int c;
  for(int i  = 0;--lim>0 && (c = getchar())!=EOF && c!='\n';i++){
    s[i] = c;
  }
  if(c == '\n'){
    s[i++] = c;
  }
  s[i] = '\0';
  return i;
}

bool checker(char s[],char target[]){
  for(int i = 0;s[i]!='\0';i++){
    for(int j=i,k=0;target[k]!='\0' && target[k]==s[j];j++,k++);
  if(t[k]=='\0'){
    return true;
  }
  return false;
  }
}
