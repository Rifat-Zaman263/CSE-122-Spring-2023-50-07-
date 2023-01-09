


//codeforce problem No:71A
//problem Name:Way Too Long Words



#include<stdio.h>
int main(){

    int n,m,i;

char s[100];

scanf("%d",&n);
for(i=1;i<=n;i++){

scanf("%s",&s);
int l=strlen(s);

if(l>10){

    printf("%c",s[0]);
    printf("%d",l-2);
    printf("%c\n",s[l-1]);

}
else printf("%s\n",s);}
return 0;
}
