#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char card_name[3];
	puts("카드 이름을 입력하세요: ");
	scanf("%2s", card_name);
	int val = 0, cnt = 0;
	
	switch (card_name[0]) {
		case 'K':
		case 'J':
		case 'Q':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		default :
			val = atoi(card_name);
	}

	if (3 <= val && val <= 6) {
		puts("카운트를 하나 올립니다.\n");
		cnt++;
	} else if (val == 10 ) {
		puts("카운트를 하나 내립니다.\n");
		cnt--;
	}

	return 0;
}
	
