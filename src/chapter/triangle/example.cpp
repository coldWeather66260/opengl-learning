#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <iostream>

constexpr float vertices[] = {
  -0.5f, -0.5f, 0.0f, 
  0.5f, -0.5f,  0.0f,
  0.0f,  0.5f, 0.0f
};

int triangle() { 
  
  unsigned int VBO;      // reference to vertex buffer object
  glGenBuffers(1, &VBO); // generate buffer object
  glBindBuffer(GL_ARRAY_BUFFER, VBO); // bind vbo to GL_ARRAY_BUFFER type 

  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
  
  
  
  return 0; 
  
  
  }