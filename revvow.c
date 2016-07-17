#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char a[100],b[100],t;
	int i,l,j=0;

	gets(a);

	strrev(a);
	l=strlen(a);

	for(i=0;i<l;i++){
		t=a[i];
		t=tolower(t);
		if(t!='a' && t!='e' && t!='i' && t!='o' && t!='u'){
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';

	puts(a);
	puts(b);

return 0;
}
