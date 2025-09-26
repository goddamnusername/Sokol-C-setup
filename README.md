compile shader : ./sokol-shdc --input assets/shaders/triangle.glsl --output triangle_shader.h --slang glsl430:hlsl5:metal_macos
compile main.c : gcc main.c -o main.exe -lgdi32 -lopengl32
 
<img width="1231" height="1016" alt="image" src="https://github.com/user-attachments/assets/b511d854-2c91-45be-b0bc-4fe5a7ba0c0a" />
