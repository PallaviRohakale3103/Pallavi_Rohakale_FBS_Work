void main()
{
	char str[100];
	char newstr[100];
	int i,j=0;
	
	printf("entr a string");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(i%2==0){
			newstr[j]=str[i];
			j++;
		}
	}
	newstr[j]='\0';
	printf("string after remov odd index%s\n",newstr);
	
}