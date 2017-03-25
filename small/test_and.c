#include <stdio.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <string.h>

void main()
{
	unsigned int a = 3232235806ul;
	unsigned int b = 0;
	char ip_str[16] = { 0 };
	struct in_addr inet_pton_r;
	unsigned int c = 0xffff0000;
	unsigned int d = 0xffff0000;
	memset(&inet_pton_r,0,sizeof(inet_pton_r));
	
	b = a & 0xffff0000;
	inet_pton_r.s_addr = b;
	printf("a:%u\nb:%u\n",a,b);
	inet_ntop(AF_INET,(void*)&inet_pton_r,ip_str,16);
	printf("ip:%s\n",ip_str);
	printf("%u\n",c & d);


}
