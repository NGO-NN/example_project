#ifndef __CLIENT_H__
#define __CLIENT_H__

#include "iostream"
#include <asio.hpp>
using namespace std;
#include "client_session.h"
#include "../net/msg.h"
#include "../net/user.h"

class Client{
public:
    Client(asio::io_context& ioc,const char* serverAddress,unsigned short port);
    void start_client();
private:
    asio::io_context& ioc_;
    shared_ptr<CSession> session_;
    bool verify_identity();
};

#endif