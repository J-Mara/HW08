#include <stdio.h>

int mystrlen(char *s){
  int i;
  for (i = 0; s[i] != '\0'; ++i);
  return i;
}

char* mystrcpy(char *dest, char *source){
  int i;
  int n = mystrlen(source);
  for(i = 0; source[i] != '\0' && i < n; i++){
    dest[i] = source[i];
  }
  return dest;
}

char * mystrncpy( char *dest, char *source, int n){
  int i;
  for(i = 0; i < n && source[i] != '\0'; i++){
    dest[i] = source[i];
  }
  return dest;
}

char * mystrcat( char *dest, char *source ){
  int i;
  for(i = 0; source[i] != '\0'; i++){
    dest[i] = source[i];
  }
  return dest;
}

char *mystrncat(char *dest, char *source, int n){
  int i;
  int l = mystrlen(dest);
  for(i = 0; source[i] != '\0' && i < n; i++){
    dest[l+i] = source[i];
  }
  return dest;
}

int mystrcmp(char *s1, char *s2){
  int i;
  for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){
    if(s1[i] > s2[i]){
      return 1;
    }
    if(s1[i] < s2[i]){
      return -1;
    }
  }
  if(mystrlen(s1) > mystrlen(s2)){
    return 1;
  }
  if(mystrlen(s1) < mystrlen(s2)){
    return -1;
  }

  return 0;
}

char *mystrchr(char *s, char c){
  int i;
  for(i = 0; s[i] != '\0'; i++){
    if(s[i] == c){
      return &s[i];
    }
  }
  return NULL;
}
