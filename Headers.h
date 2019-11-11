#include<iostream>
#include<math.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <ctime>
#include <openssl/sha.h>
#define ll long long int
#define BUF_MAX 4096
#define max_bit 16
#define lst_sz 8
struct nodeInfo
{
	string ip;
	int port;
	ll hash;
};
using namespace std;