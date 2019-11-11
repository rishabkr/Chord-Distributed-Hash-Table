#include "Headers.h"
class Node
{
	public:
	int port;
	struct sockaddr_in address;
	int sockid;
	vector<nodeInfo> fingerTable,successorList;
	ll nodeID;
	bool inRing;
	nodeInfo predecessor,successor;
	void initializeNode()
	{
		srand(time(NULL));
		port=rand()%565536;//between 0 to 65535
		if(port<1024)
			port+=1024;	//0-1023 are system ports
		socklen_t len=sizeof(address);
		address.sin_family=AF_INET;
		address.sin_port=htons(port);
		address.sin_addr.s_addr=inet_addr("127.0.0.1");
		sockid=socket(AF_INET,SOCK_DGRAM,0);
		if(bind(sockid,(struct sockaddr *)&address,len)<0)
		{
			perror("Bind failed");
			exit(-1);
		}
		cout<<"Port number "<<port<<" assigned";
		inRing=false;
	}
	void createRing()
	{
		string ip=inet_ntoa(current.sin_addr);
		string key=ip+"::"+port;
		string hashval=getHash(key);
	}
};
int main()
{
	Node ob;
	ob.initializeNode();
	ob.displayport();
	return 0;
}