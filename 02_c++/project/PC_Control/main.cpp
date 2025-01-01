#include "server.hpp"
#include "command.hpp"




int main(){
    serverhandel server;
    command cmd;
    std::string buffer;


    if(!server.server_init()){
        std::cerr << "server init failed" << std::endl;
        return -1;
    }
    if(!server.server_listen()){
        std::cerr << "server listening failed" << std::endl;
        return -2;
    }

    while (true) {
        std::cout << "Waiting for client connected" <<std::endl;
        if(server.server_accept_client()){
            std::cout << "Client connected." <<std::endl;
            server.server_send_msg("/---------------/\n");
            server.server_send_msg("menu\n");
            server.server_send_msg("Enter a command or 'exit' to quit\n");


        while (true) {
                buffer = server.server_read();
                server.trim_end(buffer);

                if(buffer == "exit"){
                    server.server_send_msg("exit");
                    server.server_close();
                    break;
                }

                if(buffer == "terminal"){
                    buffer = cmd.open_terminal();
                    server.server_send_msg(buffer);
                }
                if(buffer == "calculator"){
                    buffer = cmd.open_calculator();
                    server.server_send_msg(buffer);
                }
                if(buffer == "vscode"){
                    buffer = cmd.open_vscode();
                    server.server_send_msg(buffer);
                }
                if(buffer == "firefox"){
                    buffer = cmd.open_firefox();
                    server.server_send_msg(buffer);
                }
                if(buffer == "youtube"){
                    buffer = cmd.open_youtube();
                    server.server_send_msg(buffer);
                }
                if(buffer == "linkedin"){
                    buffer = cmd.open_linkedin();
                    server.server_send_msg(buffer);
                }
                if(buffer == "github"){
                    buffer = cmd.open_github();
                    server.server_send_msg(buffer);
                }
                if(buffer == "chatgpt"){
                    buffer = cmd.open_chatgpt();
                    server.server_send_msg(buffer);
                }
                if(buffer == "shutdown"){
                    buffer = cmd.shutdown();
                    server.server_send_msg(buffer);
                }
        
            }

        }

    }

}