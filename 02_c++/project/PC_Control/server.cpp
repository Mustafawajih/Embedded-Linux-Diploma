#include "server.hpp"


serverhandel::serverhandel(){}


serverhandel::~serverhandel(){
    if(socket_fd != -1){
        close(socket_fd);
    }
    if(clint_socket_fd != -1){
        close(clint_socket_fd);
    }
}

bool serverhandel::server_init(){
    sockaddr_in sock_addr;

    socket_fd = socket(AF_INET, SOCK_STREAM, 0);
    if(socket_fd < 0){
        std::cerr << "Socket creation failed" << std::endl;
        return -1;
    }
    sock_addr.sin_family = AF_INET;
    sock_addr.sin_port = htons(8000);
    inet_pton(AF_INET,"192.168.100.65",&sock_addr.sin_addr);
    if(bind(socket_fd,(sockaddr*)&sock_addr,sizeof(sock_addr))<0){
        std::cerr << "Bind failed" << std::endl;
        close(socket_fd);
        return -2;
    } else {
        std::cout << "Binded" << std::endl;
    }
    return true;
}

bool serverhandel::server_listen(){
    if(listen(socket_fd, 3) < 0){
        std::cerr << "Failed to listen on socket" << std::endl;
        return -1;
    } else {
        std::cout << "Server is listening on the socket..." << std::endl;
    }
    return true;
}

bool serverhandel::server_accept_client(){
    sockaddr_in client;
    socklen_t client_size = sizeof(client);
    clint_socket_fd = accept(socket_fd, (sockaddr*)&client, &client_size);

    if(clint_socket_fd < 0){
        std::cout << "failed to accept client" << std::endl;
        return false;
    }
    return true;
}

bool serverhandel::server_send_msg(const std::string& message){
    send(clint_socket_fd,message.c_str(),message.size(),0);
    return true;
}

std::string serverhandel::server_read(){
    ssize_t bytes_read = recv(clint_socket_fd, static_cast<void*>(buffer.data()), buffer.size()-1,0);

    if(bytes_read < 0) {
        std::cerr << "Error receiving data" << std::endl;
        return "Error receiving data";
    } else if(bytes_read == 0){
        std::cerr << "connection closed" << std::endl;
        return "error closed";
    } else{
        std::string buffer_str(buffer.data(),bytes_read);
        std::cout << "Received message: " << buffer_str <<std::endl;
        return buffer_str;
    }
}

void serverhandel::server_close(){
    clint_socket_fd = -1;
    if(clint_socket_fd != -1){
        close(clint_socket_fd);
    }
}

void serverhandel::close_listening(){
    close(socket_fd);
}

void serverhandel::close_listening_client(){
    close(clint_socket_fd);
}


void serverhandel::trim_end(std::string& str) {
    str.erase(std::find_if(str.rbegin(), str.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), str.end());
}