#include <iostream>
#include "engine/core/Log.h"
#include "engine/core/Input.h"

#include <GLFW/glfw3.h>

int main() {
    // Initialize GLFW
    if (!glfwInit()) {
        Log::error("Failed to initialize GLFW.");
        return -1;
    }

    // Create a windowed mode window and OpenGL context
    GLFWwindow* window = glfwCreateWindow(800, 600, "ModularFlow Engine", nullptr, nullptr);
    if (!window) {
        Log::error("Failed to create GLFW window.");
        glfwTerminate();
        return -1;
    }

    // Make the window's context current
    glfwMakeContextCurrent(window);

    Log::info("Window created. Press SPACE or ENTER to test input.");

    // Main game loop
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();        // Update internal input state
        Input::update(window);   // Our engine's input layer

        if (Input::isKeyPressed(GLFW_KEY_SPACE)) {
            Log::info("SPACE is held down.");
        }

        if (Input::isKeyJustPressed(GLFW_KEY_ENTER)) {
            Log::warn("ENTER was just pressed.");
        }
    }

    // Clean up
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
