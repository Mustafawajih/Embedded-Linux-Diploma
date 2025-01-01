#include "command.hpp"

command::command(){}

std::string command::open_terminal(){
    std::string result;
    FILE* fp = popen("terminator", "r");
    if(!fp){
        return "failed to open terminator";
    }
    char buffer[128];
    while((fgets(buffer,sizeof(buffer),fp)) != nullptr){
        result += buffer;
    }
    pclose(fp);
    return result;
}

std::string command::open_vscode(){
    std::string result;
    FILE* fp = popen("code", "r");
    if(!fp){
        return "failed to open code";
    }
    char buffer[128];
    while((fgets(buffer,sizeof(buffer),fp)) != nullptr){
        result += buffer;
    }
    pclose(fp);
    return result;
}

std::string command::open_calculator(){
    std::string result;
    FILE* fp = popen("gnome-calculator", "r");
    if(!fp){
        return "failed to open calculator";
    }
    char buffer[128];
    while((fgets(buffer,sizeof(buffer),fp)) != nullptr){
        result += buffer;
    }
    pclose(fp);
    return result;
}

std::string command::open_firefox(){
    std::string result;
    FILE* fp = popen("firefox", "r");
    if(!fp){
        return "failed to open firefox";
    }
    char buffer[128];
    while((fgets(buffer,sizeof(buffer),fp)) != nullptr){
        result += buffer;
    }
    pclose(fp);
    return result;
}

std::string command::open_youtube(){
    std::string result;
    FILE* fp = popen("xdg-open https://www.youtube.com/", "r");
    if(!fp){
        return "failed to open firefox";
    }
    char buffer[128];
    while((fgets(buffer,sizeof(buffer),fp)) != nullptr){
        result += buffer;
    }
    pclose(fp);
    return result;
}

std::string command::open_linkedin(){
    std::string result;
    FILE* fp = popen("xdg-open https://www.linkedin.com/feed/", "r");
    if(!fp){
        return "failed to open firefox";
    }
    char buffer[128];
    while((fgets(buffer,sizeof(buffer),fp)) != nullptr){
        result += buffer;
    }
    pclose(fp);
    return result;
}

std::string command::open_github(){
    std::string result;
    FILE* fp = popen("xdg-open https://github.com/dashboard", "r");
    if(!fp){
        return "failed to open firefox";
    }
    char buffer[128];
    while((fgets(buffer,sizeof(buffer),fp)) != nullptr){
        result += buffer;
    }
    pclose(fp);
    return result;
}

std::string command::open_chatgpt(){
    std::string result;
    FILE* fp = popen("xdg-open https://chatgpt.com/?model=auto", "r");
    if(!fp){
        return "failed to open firefox";
    }
    char buffer[128];
    while((fgets(buffer,sizeof(buffer),fp)) != nullptr){
        result += buffer;
    }
    pclose(fp);
    return result;
}

std::string command::shutdown(){
    std::string result;
    FILE* fp = popen("shutdown -h now", "r");
    if(!fp){
        return "failed to open firefox";
    }
    char buffer[128];
    while((fgets(buffer,sizeof(buffer),fp)) != nullptr){
        result += buffer;
    }
    pclose(fp);
    return result;
}