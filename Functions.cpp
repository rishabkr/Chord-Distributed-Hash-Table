#include "Headers.h"
void getHash(string key)
{
	 unsigned char digest[SHA_DIGEST_LENGTH];
	 SHA1((unsigned char*)&key.strlen(KEY),(unsigned char*)&digest);
}