#ifndef COMMAND_HPP
#define COMMAND_HPP

#include<string>
#include<map>
#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<algorithm>

class command{
    private:
    std::string buffer;
    public:
        command();
        std::string open_terminal();
        std::string open_vscode();
        std::string open_calculator();
        std::string open_firefox();
        std::string open_youtube();
        std::string open_linkedin();
        std::string open_github();
        std::string open_chatgpt();
        std::string shutdown();


};


#endif /*COMMAND_HPP*/
