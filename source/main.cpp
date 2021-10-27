#include <iostream>

#include <GLFW/glfw3.h>

#include <config.h>
#include <log.hpp>

void printStartupMessage() {
    std::cout << "\n" << PROJECT_NAME << " " << PROJECT_VERSION << "\n\n";
}

int main() {
    printStartupMessage();

    GLFWwindow *window;
    if(!glfwInit()) {
        log("Failed to initialize GLFW", 1);
        exit(EXIT_FAILURE);
    }

    window = glfwCreateWindow(900, 600, "template-CppCmake", NULL, NULL);
    
    if (!window) {
        log("Failed to open GLFW window", 1);
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    // Main loop
    while(!glfwWindowShouldClose(window))
    {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

    // Exit program
    exit(EXIT_SUCCESS);
}
