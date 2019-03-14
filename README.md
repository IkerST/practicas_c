# practicas_c

Practicas realizadas durante el curso en C/C++

## Compilar

Para compilar se necesita CMake(3.1+), make y un compilador compatible con C++ 11 (gcc, clang), y se ejecuta los siguientes comandos:

Configurar
```bash
cmake ../school-projects
```

Crear ejecutables:
```bash
cmake --build . --target all
```

Limpiar
```bash
cmake --build . --target clean
```
