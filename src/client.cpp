#include "client.h"

void Client::initClient(){
    this->clientFD = 0;
    this->clientLen =0;
    this->status = "";
    this->method = "";
    this->path = "";
    this->version = "HTTP/1.1 ";
    memset(&this->clientAddress,0,sizeof(this->clientAddress));
}
