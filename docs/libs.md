# Libraries

### SDL
You can use SDL for simple graphics:
#### Installation (Fedora)
```bash
sudo dnf install SDL2 SDL2-devel
```

#### Compile including SDL lib
```bash
gcc -o <binary-name> <source-name>.c -I/usr/include/SDL2 -L/usr/lib -lSDL2
```