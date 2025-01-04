#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int chu=0,so=0,kytudb=0;
	printf("nhap chuoi ky tu: ");
	fgets(str,99,stdin);
	str[strcspn(str,"\n")]='0';
	for(int i=0;str[i]!='0';i++){
		if((str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')){
			chu++;
		}else if (str[i]>='0'&&str[i]<='9'){
			so++;
		}else if(str[i]!= ' '){
			kytudb++;
		}
	}
	printf("so ky tu la chu cai: %d\n",chu);
	printf("so ky tu la so: %d\n",so);
	printf("so ky tu db: %d\n",kytudb);
	return 0;
}
