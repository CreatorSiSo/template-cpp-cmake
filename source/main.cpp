#include <GLFW/glfw3.h>

#include <log.hpp>

int main() {
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
