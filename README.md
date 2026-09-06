# ProductionPractice — GoogleTest

Учебный проект по производственной практике.

## Что реализовано

Созданы интерфейсы классов:

- `Queue`: `push`, `pop`
- `Heap`: `push`, `pop`
- `BinaryTree`: `push`, `pop`, `search`

Алгоритмы структур данных не реализуются по условию задания. В `.cpp` находятся минимальные заглушки, необходимые для компиляции и запуска тестового проекта.

## Открытие в Visual Studio

1. Запустите Visual Studio 2022.
2. Выберите **File → Open → Folder**.
3. Откройте папку проекта.
4. Visual Studio автоматически обнаружит `CMakeLists.txt`.
5. Запустите цель `unit_tests`.

## Через терминал

PowerShell

1. Перейдите в папку проекта через терминал. 
cd 'C:\местонахождение_папки\ProductionPractice'
2. cmake -S . -B build 
3. cmake --build build --config Debug
4. ctest --test-dir build -C Debug --output-on-failure

