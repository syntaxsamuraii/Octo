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
      window.DestroyWindow();
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
          simpleObject.type = Octo::SPRITE;
          simpleObject.init();
          while (window.Running)
          {
             window.Clear(Mathf::Vector4f(255, 255, 255, 255));
             simpleObject.draw(simpleObject.texture());
             window.Display();
          }
          window.DestroyWindow();
      }
   ```
* Properties in Object
  Object contains enum consisting of ```AUDIO, SPRITE, PARTICLE, TEXT, BUTTON```.
  Object type need to take one of these or it will automatically set as a sprite
  Sprite has transform property ```simpleObject.transfrom.``` it will show all the properties that can be changed.
  Sprites color can be changed by ```simpleObject.color(0, 255, 0, 255);``` or ```simpleObject.color(Mathf::Vector4f(0, 255, 0, 255));```

Made with GLFW, GLAD, STBI
#Currently development
