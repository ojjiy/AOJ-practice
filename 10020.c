#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[1000];
	char result;
	int sum;
	int num[26] = {0};
	int i;
	int var;
	while(NULL != fgets(str, sizeof(str), stdin)){
		while(str[i] != '\0'){
			if('A' <= str[i] && str[i] <= 'Z') {
				var = str[i] - 'A';
				num[var]++;
				// fprintf(stderr, "%d, upper\n", var);
			} else if ('a' <= str[i] && str[i] <= 'z'){
				var = str[i] - 'a';
				num[var]++;
				// fprintf(stderr, "lower\n");
			}
			// fprintf(stderr, "%c(%d)\n", str[i], str[i]);
			i++;
		}
		i=0;
	}
	for(i=0;i<26;i++){
		result = i + 'a';
		printf("%c : %d\n", result, num[i]);
	}

	return 0;
}