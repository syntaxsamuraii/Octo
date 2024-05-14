# Octo

![OctoLogo](https://github.com/syntaxsamuraii/Octo/assets/115278697/21f07170-7c63-4610-a7ed-cb9e28db52f9)


A easy to use c++14 opengl based game framework for windows that puts sfml and others to shame. 

* Why use Octo?
ans - Its very easy to use and powerful enough to make your games with.

# Features
  * Textures and sprites
  * Build-in math library
  * Camera
  * Audio
  * Input System
  * ImGui Support

# Upcoming Features
  * More Image file formats
  * Post Processing
  * Basic 3D system. Supports cube and depth
  * Particles
  * UI

# Getting started
  * How to setup the visual studio project with Octo
     - All configurations
     - Include the Octo.lib in the library directory
     - In linker input add Octo.lib
     - Add Octo.dll to source directory
     - Add both ```Mathf.h``` and ```Octo.h``` to your project and include them.
     - Set Debug to release
     - Set to x64
  * Basic Window Example
    ```cpp
    #include "Octo.h"
    Octo::Window window;
    int main()
    {
      window.Create("My first window", 500, 600, false, false, false);
      while (!window.Running())
      {
           window.Clear(255, 255, 255, 255);
           window.Display();
      }
      window.DestroyWindow();
    }
    ```
 * Adding an Object Example
   ```cpp
      #include "Octo.h"
      Octo::Window window;
      Octo::Sprite simpleObject;
     int main()
     {
         window.Create("Object test", 500, 600, false, false, false);
         simpleObject.Init(simpleObject.loadfrompath("player.png"));
         while (!window.Running())
         {
              window.Clear(255, 255, 255, 255);
              simpleObject.Draw();
              window.Display();
         }
         simpleObject.DestroyShaders();
         window.DestroyWindow();
   }
   ```
* Key Input Example
   ```cpp
       #include "Octo.h"
       Octo::Window window;
       Octo::Sprite simpleObject;
       int main()
       {
          window.Create("Input Test", 500, 600, false, false, false);
          simpleObject.Init(simpleObject.loadfrompath("player.png"));
          while (!window.Running())
          {
             window.Clear(255, 255, 255, 255);
             if (Octo::IsKeyPressed(Octo::OCTO_A))
             {
                simpleObject.Move(-0.01, 0);
             }
             simpleObject.Draw();
             window.Display();
          }
          simpleObject.DestroyShaders();
          window.DestroyWindow();
      }
   ```
* Camera Example
  - Camera is inside the ```Octo::Window```.
  - ```Window.SetCameraZoom(zoom);``` in here zoom is a float
  - ```Window.SetCameraPosition(posX, posY);``` in here posX and posY are float
  - ```Window.MoveCamera(posX, posY);``` in here posX and posY are float

   ```cpp
       #include "Octo.h"
       Octo::Window window;
            
       int main()
       {
          window.Create("Camera Test", 500, 600, false, false, false);

          while (!window.Running())
          {
             window.Clear(255, 255, 255, 255);
             if (Octo::IsKeyPressed(Octo::OCTO_A))
             {
                window.MoveCamera(-1, 0);
             }
             if (Octo::IsKeyPressed(Octo::OCTO_D))
             {
                window.MoveCamera(1, 0);
             }
             if (Octo::IsKeyPressed(Octo::OCTO_W))
             {
                window.MoveCamera(0, 1);
             }
             if (Octo::IsKeyPressed(Octo::OCTO_S))
             {
                window.MoveCamera(0, -1);
             }
             window.Display();
          }
          window.DestroyWindow();
      }
   ```
 * Audio Example
   ```cpp
       #include "Octo.h"
       Octo::Window window;
       Octo::Audio simpleAudio;
       int main()
       {
          window.Create("Audio Test", 500, 600, false, false, false);
          simpleAudio.Init(simpleAudio.loadfromfile("music.wav"));
          while (!window.Running())
          {
             window.Clear(255, 255, 255, 255);
             simpleAudio.Play(); //Audio Types supported are wav, mp3 and flac
             //simpleAudio.Stop();
             window.Display();
          }
          window.DestroyWindow();
      }
   ```
    * Timer example
   ```cpp
      #include "Octo.h"
      Octo::Window window;
      Octo::Sprite simpleObject;
     int main()
     {
         window.Create("Timer test", 500, 600, false, false, false);
         simpleObject.Init(simpleObject.loadfrompath("player.png"));
         while (!window.Running())
         {
              window.Clear(255, 255, 255, 255);
              if (Octo::Timer(2))
              {
                 simpleObject.Move(1, 0);
              }
              simpleObject.Draw();
              window.Display();
         }
         simpleObject.DestroyShaders();
         window.DestroyWindow();
   }
   ```
   * ImGui example
```cpp
#include "Octo.h"
#include <iostream>

Octo::Window window;

float slider_f = 0;
float input_f = 0;
float drag_f = 0;

int slider_i = 0;
int input_i = 0;
int drag_i = 0;

std::string input_s = "Octo is the best!";

int main() {
    window.Create("Imgui Test", 500, 700, false, false, false);
    Octo::Imgui::Start();
    while (!window.Running()) {
        window.Clear(0, 0, 0, 255);
        Octo::Imgui::Update();
        //ImGui code here
        if (Octo::Imgui::Begin("Octo window"))
        {
            Octo::Imgui::InputText("Input String", &input_s);

            if (Octo::Imgui::Button("Press me!"))
            {
                std::cout << "Pressed" << std::endl;
            }
            if (Octo::Imgui::CollapsingHeader("Floats"))
            {
                Octo::Imgui::SliderFloat("Slider float", &slider_f, -10, 10);
                Octo::Imgui::DragFloat("Drag float", &drag_f);
                Octo::Imgui::InputFloat("Input float", &input_f);
            }
            if (Octo::Imgui::CollapsingHeader("Integers"))
            {
                Octo::Imgui::SliderInt("Slider Int", &slider_i, -10, 10);
                Octo::Imgui::DragInt("Drag Int", &drag_i);
                Octo::Imgui::InputInt("Input Int", &input_i);
            }
            Octo::Imgui::End();
        }
        Octo::Imgui::Render();
        window.Display();
    }

    Octo::Imgui::Shutdown();
    window.DestroyWindow();

    return 0;
}
```

* Understanding Octo Error Codes
  - Every error with ```U``` is based for Audio.
  - ```U786``` error means Audio engine is not initialized main cause is you forgot to put the ```audio.Init();``` function.
  - ```U576``` error means Audio file path you provided does not exist or is not supported by Octo (Supported paths are wav, mp3 and flac).
  - Every error with ```A``` is based for Window
  - ```A0655``` error means creating window has failed.
  - ```A0766``` error means opengl rendering is not supported in your computer.
  - Every error with ```O``` is based for GameObject
  - ```O877``` error means your path of the texture does not exist(Texture type supported is only PNG for now).

if you have any questions you can join our discord server to ask questions - https://discord.gg/nhgYz8HJ

Made with GLFW, GLAD, STBI, MiniAudios, ImGui
#Currently development
(Source code available from Beta version)
