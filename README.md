compile shader : ./sokol-shdc --input assets/shaders/triangle.glsl --output triangle_shader.h --slang glsl430:hlsl5:metal_macos
compile main.c : gcc main.c -o main.exe -lgdi32 -lopengl32
 
