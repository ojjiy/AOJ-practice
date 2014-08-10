#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[20];
	char answer[20] = "\0";
	int i,n;

	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", &str);
		if (strcmp(answer, "\0") == 0 || strcmp(answer, str) > 0)
			&answer = str;
	}

	printf("%s\n", answer);

	return 0;
}