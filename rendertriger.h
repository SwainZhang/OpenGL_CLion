//
// Created by 张瑞 on 2018/5/1.
//

#ifndef TESTGL_RENDERTRIGER_H
#define TESTGL_RENDERTRIGER_H
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>


void render(void){
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    {
        glColor3f(1.0f,0.0f, 0.0f);
        glVertex2f(0, .5);

        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(-.5f, -.5f);

        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(.5f, -.5f);
    }
    glEnd();
    glFlush();
}

int render_triger_main(int argc, const char * argv[]) {

    GLFWwindow *win;

    if(!glfwInit()){
        return -1;
    }

    win = glfwCreateWindow(640, 480, "OpenGL Base Project", NULL, NULL);

    if(!win){
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    if(!glewInit()){
        return -1;
    }

    glfwMakeContextCurrent(win);

    while(!glfwWindowShouldClose(win)){
        std::cout<<"------"<<std::endl;
        std::cout<<glGetString(GL_VERSION)<<std::endl;
        glfwPollEvents();
        render();
        glfwSwapBuffers(win);
    }
    glfwTerminate();
    exit(EXIT_SUCCESS);

    return 0;
}


#endif //TESTGL_RENDERTRIGER_H
