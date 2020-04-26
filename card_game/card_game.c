#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char card_name[3];
	puts("카드 이름을 입력하세요: ");
	scanf("%2s", card_name);
	int val = 0;

	if (card_name[0] == 'K') {
		val = 10;
	} else if (card_name[0] == 'Q') {
		val = 10;
	} else if (card_name[0] == 'J') {
		val = 10;
	} else if (card_name[0] == 'A') {
		val = 11;
	} else {
		val = atoi(card_name);
	}

	printf("카드값은 다음과 같습니다: %i\n", val);
	return 0;
}
	
