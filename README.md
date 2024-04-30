# Octo
A easy to use c++14 opengl based game framework at puts sfml and others to shame.

* Why use Octo?
ans - Its very easy to use and powerful enough to make your games with.

# Features
  * Textures and sprites
  * Build-in math library
  * Camera
  * UI Text
  * Input System

# Getting started
  * Basic Window
    ```cpp
    #include "Octo.h"
    Octo::Window window;
    int main()
    {
      window.CreateWindow("My first window", 500, 600);
      while (!window.Running())
      {
           window.Clear(255, 255, 255, 255);
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
          window.CreateWindow("Object test", 500, 600);
          simpleObject.type = Octo::SPRITE;
          simpleObject.init();
          while (!window.Running())
          {
             window.Clear(255, 255, 255, 255);
             simpleObject.draw(simpleObject.loadfrompath("player.png"));
             window.Display();
          }
          window.DestroyWindow();
      }
   ```
* Key Input Object
   ```cpp
       #include "Octo.h"
       Octo::Window window;
       Octo::GameObject simpleObject;
       int main()
       {
          window.CreateWindow("Input Test", 500, 600);
          simpleObject.type = Octo::SPRITE;
          simpleObject.init();
          while (!window.Running())
          {
             window.Clear(255, 255, 255, 255);
             if (Octo::IsKeyPressed(Octo::OctoKey_A))
             {
                simpleObject.transform.Position.x++;
             }
             simpleObject.draw(simpleObject.loadfrompath("player.png"));
             window.Display();
          }
          window.DestroyWindow();
      }
   ```
 * Key Input Object
   ```cpp
       #include "Octo.h"
       Octo::Window window;
       Octo::Audio simpleAudio;
       int main()
       {
          window.CreateWindow("Audio Test", 500, 600);
          simpleAudio.init();
          while (!window.Running())
          {
             window.Clear(255, 255, 255, 255);
             simpleAudio.play(simpleAudio.loadfrompath("music.wav"));
             window.Display();
          }
          window.DestroyWindow();
      }
   ```

Made with GLFW, GLAD, STBI
#Currently development
