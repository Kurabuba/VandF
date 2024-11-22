#include <stdio.h>

int main(){
char c[1000];
FILE*f;
int ans;
printf("1 - ядовитый и летучий, 2 - пес с длинной мордой, 3 - бу испугался 0- выход\n");
scanf("%i", &ans);
while(ans !=0){
if (ans == 1)
	f=fopen("vaf", "r");
else if (ans == 2)
	f=fopen("dog", "r");
else if(ans == 3)
	f=fopen("bu", "r");
else
	printf("Такого номера нет\n");

if(!f)
	return 1;

while (!feof(f)){
	if(fgets(c, 1000, f) != NULL)
	printf("%s", c);
}
fclose(f);
printf("1 - ядовитый м летучий, 2 - пес с длинной мордой, 3 - бу испугался 0- выход\n");
scanf("%i", &ans);}
return 0;
} 
