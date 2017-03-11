
#include <cstdio>

uint8_t rolt8(uint8_t value, uint8_t shift) {
	return value << shift | value >> (8 - shift);
}

uint8_t *sbox() {
	static uint8_t sbox[256];
	uint8_t p = 1;
	uint8_t q = 1;
	do {
		p = p ^ p << 1 ^ (p & 0x80 ? 0x1B : 0);
		q ^= q << 1;
		q ^= q << 2;
		q ^= q << 4;
		q ^= q & 0x80 ? 0x09 : 0;
		uint8_t xformed = q ^ rolt8(q, 1) ^ rolt8(q, 2) ^ rolt8(q, 3) ^ rolt8(q, 4);
		sbox[p] = xformed ^ 0x63;
	} while (p != 1);
	sbox[0] = 0x63;
	return sbox;
}

int main() {
	uint8_t *pointer;
	pointer = sbox();
	uint8_t i = 0xff;
	do {
		std::printf("%02x\n", pointer[i]);
	} while (i--);
}
