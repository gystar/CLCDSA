int main(void)
{

	char moji[30];
	char moji2[30];
	int j=0;
	scanf("%s", moji);
	
	for (int i = 0;moji[i] != '\0';i++) {
		if (moji[i] == 'a'|| moji[i] == 'i' || moji[i] == 'u' || moji[i] == 'e' || moji[i] == 'o') {
		
		}
		else {
			moji2[j] = moji[i];
			j++;
		}
	}
	moji2[j] = '\0';
	printf("%s\n", moji2);

	return 0;
} 