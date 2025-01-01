/******************************************************
****************handle interrupt signal like (ctrl+c)**
*******************************************************/

#include <iostream>
#include <csignal>
#include <unistd.h>

// Signal handler function
void signalHandler(int signal_num) {
    std::cout << "Interrupt signal (" << signal_num << ") received.\n";

    // Cleanup and close up stuff here

    // Terminate program
    exit(signal_num);
}

int main() {
    // Register signal handler for SIGINT (Ctrl+C)
    signal(SIGINT, signalHandler);

    // Infinite loop
    while (true) {
        std::cout << "Running... Press Ctrl+C to stop.\n";
        sleep(1);  // Sleep for a second
    }

    return 0;
}
