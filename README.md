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

# Upcoming Features
  * More Image file formats
  * Post Processing
  * UI

# Getting started
  * How to setup the visual studio project with Octo
     - Include the Octo.lib in the library directory
     - In linker input add Octo.lib
     - Add Octo.dll to source directory
     - Add both ```Mathf.h``` and ```Octo.h``` to your project and include them. 
  * Basic Window Example
    ```cpp
    #include "Octo.h"
    Octo::Window window;
    int main()
    {
      window.Create("My first window", 500, 600, false);
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
         window.Create("Object test", 500, 600, false);
         simpleObject.Init();
         while (!window.Running())
         {
              window.Clear(255, 255, 255, 255);
              simpleObject.Draw(simpleObject.loadfrompath("player.png"));
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
          window.Create("Input Test", 500, 600, false);
          simpleObject.Init();
          while (!window.Running())
          {
             window.Clear(255, 255, 255, 255);
             if (Octo::IsKeyPressed(Octo::OCTO_A))
             {
                simpleObject.Move(-1, 0);
             }
             simpleObject.Draw(simpleObject.loadfrompath("player.png"));
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
          window.Create("Camera Test", 500, 600, false);

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
          window.Create("Audio Test", 500, 600, false);
          simpleAudio.Init(simpleAudio.loadfrompath("music.wav"));
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
* Understanding Octo Error Codes
  - Every error with ```U``` is based for Audio.
  - ```U786``` error means Audio engine is not initialized main cause is you forgot to put the ```audio.Init();``` function.
  - ```U576``` error means Audio file path you provided does not exist or is not supported by Octo (Supported paths are wav, mp3 and flac).
  - Every error with ```A``` is based for Window
  - ```A0655``` error means creating window has failed.
  - ```A0766``` error means opengl rendering is not supported in your computer.
  - Every error with ```O``` is based for GameObject
  - ```O877``` error means your path of the texture does not exist(Texture type supported is only PNG for now).


Made with GLFW, GLAD, STBI, MiniAudios
#Currently development
