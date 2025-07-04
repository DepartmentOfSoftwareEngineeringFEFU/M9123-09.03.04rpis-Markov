# FFT Benchmark

Репозиторий содержит инструменты для проведения замеров производительности различных реализаций быстрого преобразования
Фурье (FFT).

## Система проведения замеров (C++/CMake)

### Требования

- CMake версии 3.10 или выше
- Компилятор C++ с поддержкой C++20 (GCC, Clang или MSVC)
- Библиотека FFTW3 (должна быть установлена в системе)

### Установка и сборка

1. Клонируйте репозиторий:

```bash
git clone https://github.com/markov-avl/fft-benchmark.git
cd fft-benchmark
```

2. Создайте директорию для сборки и перейдите в неё:

```bash
mkdir build && cd build
```

3. Запустите конфигурацию CMake:

```bash
cmake ..
```

4. Соберите проект:

```bash
cmake --build . --config Release
```

### Запуск тестов производительности

После сборки в директории `build` будут созданы исполняемые файлы. Запустите их для проведения замеров:

```bash
./build/FFTBenchmark [опции]  # запуск замеров
./build/Tests  # запуск тестов
```

Доступные опции:

```
  -h,     --help              Print this help message and exit
  -a,     --algorithms TEXT:{B-I+S-2,B-I+S-4,CT-I+B+BRP+S-2,CT-I+B+DRP+S-4,CT-I+BRP+S-2,CT-I+DRP+S-4,CT-R+B+BRP-2,CT-R+B+DRP-4,CT-R+BRP-2,CT-R+DRP-4,CT-R+S-2,CT-R+S-4,CT-R-2,CT-R-4,DFT,FFTW-E,GT-I+B+S-2,GT-I+DFT,S-I+B-2,S-I+TP-2,S-I+TP-4,S-I-2,S-I-4,S-R-2,S-R-4} ... REQUIRED
                              Algorithms to compare
  -s,     --sizes UINT:POSITIVE ... REQUIRED
                              Sizes of the input data (e.g., 1024, 2048, ...)
  -m,     --measurer TEXT:{cpu-power-meter,timer} [timer]
                              Measurer to use
  -g,     --generator TEXT:{constant,impulse,random,sinusoid} [random]
                              Input data generator
  -o,     --output TEXT [output.csv]
                              Output file path
  -r,     --runs UINT:POSITIVE [10]
                              Number of runs for each algorithm (default: 10)
  -t,     --threads UINT:NONNEGATIVE [0]
                              Maximum number of threads (0 for system)
```

## Эксперименты в Jupyter Notebook

### Требования

- Python 3.7 или выше
- Jupyter Notebook
- Установленные зависимости:
    - pandas
    - matplotlib
    - seaborn

### Установка зависимостей

1. Рекомендуется создать виртуальное окружение:

```bash
python -m venv venv
source venv/bin/activate  # для Linux/Mac
# или
venv\Scripts\activate    # для Windows
```

2. Установите зависимости:

```bash
pip install -r requirements.txt
```

### Запуск экспериментов

1. Запустите Jupyter Notebook:

```bash
jupyter notebook
```

2. В открывшемся браузере выберите файл ноутбука (обычно с расширением `.ipynb`).

3. Выполните ячейки ноутбука последовательно:
    - Первые ячейки содержат импорт библиотек и настройки;
    - Затем идут вспомогательные функции;
    - Далее - ячейки визуализации и анализа данных.
