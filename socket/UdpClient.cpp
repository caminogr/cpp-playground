// https://pubs.opengroup.org/onlinepubs/009695399/basedefs/arpa/inet.h.html
#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  /* IPアドレス、ポート番号、ソケット */
  char destination[80];
  unsigned short port = 9876;
  int destSocket;

  /* sockaddr_in 構造体 */
  struct sockaddr_in destSockAddr;

  /* 各種パラメータ */
  int i;
  char const *toSendText = "This is a test";

  /* 相手先アドレスの入力 */
  printf("Connect to ? : (name or IP address) ");
  scanf("%s", destination);

  /* sockaddr_in 構造体のセット */
  memset(&destSockAddr, 0, sizeof(destSockAddr));
  destSockAddr.sin_addr.s_addr = inet_addr(destination);
  destSockAddr.sin_port = htons(port);
  destSockAddr.sin_family = AF_INET;

  /* ソケット生成 */
  destSocket = socket(AF_INET, SOCK_DGRAM, 0);

  /* パケット送出 */
  for (i = 0; i < 10; i++) {
    printf("sending...\n");
    sendto(destSocket, toSendText, strlen(toSendText) + 1, 0,
           (const sockaddr *)&destSockAddr, sizeof(destSockAddr));
    sleep(1);
  }

  /* ソケットの終了 */
  close(destSocket);
}
