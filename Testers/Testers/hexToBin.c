#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
input arguments:
	inputHex - pointer to input array of hex characters to be converted (ex. "0123abcd")
	outputBin - pointer to output array of binary characters, size - 33 bytes
*/
void hexToBin(char *inputHex, char *outputBin) {
	const char binary[16][5] = { "0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111" };
	const char digits[16] = "0123456789abcdef";
	int tolower();

	int i = 0;
	while ('\0' != inputHex[i]) {
		const char *p = strchr(digits, tolower(inputHex[i]));
		if (p)
			strcat_s(outputBin, 33, binary[p-digits]);
		i++;
		}
	}


	int main() {
		char binary[33] = "";
		hexToBin("abdf392a", binary);
		printf("%s\n", binary);
		printf("%s\n", "10101011110111110011100100101010");
		return 0;
	}