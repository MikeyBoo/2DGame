# __Prerequisites and Dependencies__

There are many ways to go about this, of course, but the following was the method I used in order to use Windows but avoid their Visual Studio IDE and stick with my favorite text editor, Visual Studio Code.

## First, I installed MSYS2 for Windows:

[https://www.msys2.org/](https://www.msys2.org/)

Launch MSYS2 MSYS terminal and install the following packages:

```bash
    pacman -S mingw-w64-x86_64-lua
    pacman -S mingw-w64-x86_64-SDL2
    pacman -S mingw-w64-x86_64-SDL2_gfx
    pacman -S mingw-w64-x86_64-SDL2_net
    pacman -S mingw-w64-x86_64-SDL2_ttf
    pacman -S mingw-w64-x86_64-SDL2_image
    pacman -S mingw-w64-x86_64-SDL2_mixer
```
