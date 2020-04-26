#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include <iostream>

#define BUFFER_SIZE 256

int main() {
  /* ポート番号、ソケット */
  unsigned short port = 9876;
  int recvSocket;

  /* sockaddr_in 構造体 */
  struct sockaddr_in recvSockAddr;

  /* 各種パラメータ */
  int status;
  int numrcv;
  char buffer[BUFFER_SIZE];
  unsigned long on = 1;

  /* sockaddr_in 構造体のセット */
  memset(&recvSockAddr, 0, sizeof(recvSockAddr));
  recvSockAddr.sin_port = htons(port);
  recvSockAddr.sin_family = AF_INET;
  recvSockAddr.sin_addr.s_addr = htonl(INADDR_ANY);

  /* ソケット生成 */
  recvSocket = socket(AF_INET, SOCK_DGRAM, 0);
  std::cout << "recvSocket" << std::endl;

  /* バインド */
  status = bind(recvSocket, (const struct sockaddr *)&recvSockAddr,
                sizeof(recvSockAddr));

  /* パケット受信 */
  while (1) {
    numrcv = recvfrom(recvSocket, buffer, BUFFER_SIZE, 0, NULL, NULL);
    if (numrcv == -1) {
      status = close(recvSocket);
      break;
    }
    printf("received: %s\n", buffer);
  }
}
