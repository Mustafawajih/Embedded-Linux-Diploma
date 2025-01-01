#ifndef SERVER_HPP
#define SERVER_HPP


#include<iostream>
#include<string>
#include<array>
#include<algorithm>
#include<cstring>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>


class serverhandel{
    private:
        int socket_fd;
        int clint_socket_fd;
        std::array<char,5000> buffer;

    public:
        serverhandel();
        bool server_init();
        bool server_listen();
        bool server_accept_client();
        bool server_send_msg(const std::string& message);
        std::string server_read();
        void close_listening();
        void close_listening_client();
        void trim_end(std::string& str);
        void server_close();
        ~serverhandel();

};




#endif /*SERVER_HPP*/