# Octo
A easy to use c++17 opengl based game framework at puts sfml and others to shame.

* Why use Octo?
ans - Its very easy to use and powerful enough to make your games with.

# Features
  * In Build particle system
  * Textures and sprites
  * Build-in math library
  * Prewritten imgui setup(If you wanted to make a game engine on top the framework)
  * Audio
  * Build-in AI generator
  * UI (Text, Button)
  * Input System

# Getting started
  * Basic Window
    ```cpp
    #include "Octo.h"
    Octo::Window window;
    int main()
    {
      window.CreateWindow("My first window", 500, 600);
      while (window.Running)
      {
           window.Clear(Mathf::Vector4f(255, 255, 255, 255));
           window.Display();
      }
      Octo::DestroyWindow(window);
    }
    ```
 * Adding an Object
   ```cpp
       #include "Octo.h"
       Octo::Window window;
       Octo::GameObject simpleObject;
       int main()
       {
          window.CreateWindow("My first window", 500, 600);
          simpleObject.type = Octo::Sprite;
          simpleObject.loadfrompath("Player.png");
          while (window.Running)
          {
             window.Clear(Mathf::Vector4f(255, 255, 255, 255));
             simpleObject.draw();
             window.Display();
          }
          Octo::DestroyWindow(window);
      }
   ```

#Currently UnderDev
