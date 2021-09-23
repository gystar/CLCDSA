int main() {
	char word[6] = { 'a','i','u','e','o' };
	char talk[31];
	scanf("%s", talk);

	for (int i = 0; i < strlen(talk); i++) {
		if (talk[i] != word[0] && talk[i] != word[1] && talk[i] != word[2] && talk[i] != word[3] && talk[i] != word[4]) {
			printf("%c", talk[i]);
		}
	}

	printf("\n");
	return 0;

} 