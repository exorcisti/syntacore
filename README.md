# Задание
Дана строка, представляющая собой обратную польскую запись арифметического
выражения над целыми числами (от 0 до 100), написать программу интерпретатор таких
выражений для операций сложения (+), вычитания (-) и умножения (*).

Сборка проекта в Windows: 
1.Установить mingw64 (https://sourceforge.net/projects/mingw-w64/files/latest/download mingw-w64-install.exe)
2.Прописать в системные переменные путь куда установлена mingw
	Например такой, C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\ 
3.Запустить сборку exe файла
	mingw32-make -f makefile.txt
4.После сборки запустить программу 
	syntacore.exe
5. Проверить рассчет на сайте (необходимо будет досчитать переведенную запись в инфиксную на калькуляторе)
http://primat.org/news/obratnaja_polskaja_zapis/2016-04-09-1181

Сборка проекта в Linux:
1. Зайти в командной строке в папку с проектом
2. Собрать проект
	make -f makefile.txt
3. Запустить собранный файл из командной строки
	./syntacore
4. Проверить рассчет на сайте (необходимо будет досчитать переведенную запись в инфиксную на калькуляторе)
http://primat.org/news/obratnaja_polskaja_zapis/2016-04-09-1181
