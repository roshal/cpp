
#include <cstdlib>
#include <iostream>

int main() {
	std::string key, encrypted, decrypted;
	int i, random;
	key = "....hoDWU3xn3Gk9y";
	encrypted = "\xDE\x1B\x6C\x8C\x33\xAF\xE5\xD3\xFB\xD4\xE7\x76\x23\x06\xF6\x0F\xE4\xC8\x23\xA8\x3A\x5E\x80\x88\x08\xA2\x8E\xE2\x75\xA5\xD5\x80\x96\x10\x8B\x9C\xE7\x71\x11\x47\x2A\x23\xD5\x88\x42\x64\xA0\x65\x1B\x9F\x4C\x71\x3D\xD3\xBB\xB6\x8C\x95\x20\xF7\x34\x46\xB6\xAB\x1D\x72\x91\xCA";
	for (key[0] = 32; key[0] < 127; key[0] += 1)
	for (key[1] = 32; key[1] < 127; key[1] += 1)
	for (key[2] = 32; key[2] < 127; key[2] += 1)
	for (key[3] = 32; key[3] < 127; key[3] += 1) {
		std::srand(key[0] * key[1] * key[2] * key[3]);
		for (i = 0; i < encrypted.length(); i += 1) {
			random = std::rand();
			decrypted.push_back(encrypted[i] ^ key[random % key.length()] ^ random);
			if (std::isprint(decrypted[decrypted.length() - 1]) == 0) {
				break;
			}
		}
		if (encrypted.length() == i) {
			std::cout << key.substr(0, 4) << "\t" << decrypted << std::endl;
		}
		decrypted.clear();
	}
}
