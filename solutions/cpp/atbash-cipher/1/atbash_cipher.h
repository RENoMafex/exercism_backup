#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <string>
#define EXERCISM_RUN_ALL_TESTS

namespace atbash_cipher {
	std::string encode (std::string input);
	std::string decode (std::string input);
}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H