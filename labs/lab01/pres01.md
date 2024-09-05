---
## Front matter
lang: ru-RU
title: Лабораторная работа номер 1
author: Malkov Roman Sergeevich
date: 02.09.2024

## Formatting
toc: false
slide_level: 2
theme: metropolis
header-includes: 
 - \metroset{progressbar=frametitle,sectionpage=progressbar,numbering=fraction}
 - '\makeatletter'
 - '\beamer@ignorenonframefalse'
 - '\makeatother'
aspectratio: 43
section-titles: true
---

# Цель работы

Целью данной работы является приобретение практических навыков установки операционной системы на виртуальную машину, настройки минимально необходимых для дальнейшей работы сервисов.

# Конфигурация виртуальной машины

![Окно создания новой машины](Screens/conf.PNG){ #fig:002 width=60% height=60% }

# Конфигурация виртуальной машины

![Конфигурация оперативной памяти и числа ЦП](Screens/conf1.PNG){ #fig:002 width=60% height=60% }

# Конфигурация виртуальной машины

![Конфигурация жеского диска](Screens/conf2.PNG){ #fig:002 width=60% height=60% }

# Конфигурация виртуальной машины

![Конфигурация оптического диска](Screens/conf3.PNG){ #fig:002 width=60% height=60% }

# Конфигурация установки ОС

![Установка](Screens/os1.PNG){ #fig:002 width=60% height=60% }

# Конфигурация установки ОС
![Выбор языка системы](Screens/os2.PNG){ #fig:002 width=60% height=60% }

# Конфигурация установки ОС

![Выбор дополнительных опций для установки](Screens/os3.PNG){ #fig:002 width=60% height=60% }

# Конфигурация установки ОС

![Создание пользователя](Screens/os4.PNG){ #fig:002 width=60% height=60% }

# Выполнение заданий
С помощью команды dmesg требуется найти:

1. Версию ядра Linux (Linux version).    
2. Частоту процессора (Detected Mhz processor).    
3. Модель процессора (CPU0).    
4. Объем доступной оперативной памяти (Memory available).   

# Выполнение заданий
 
5. Тип обнаруженного гипервизора (Hypervisor detected).     
6. Тип файловой системы корневого раздела.     
7. Последовательность монтирования файловых систем.    


# Выполнение заданий 

![Версия ядра Linux](Screens/dmesg2.PNG){ #fig:002 width=60% height=60% }


# Выполнение заданий

![Частота процссора](Screens/dmesg3.PNG){ #fig:002 width=60% height=60% }

# Выполнение заданий

![Модель процессора](Screens/dmesg4.PNG){ #fig:002 width=60% height=60% }

# Выполнение заданий

![Объем доступной оперативной памяти](Screens/dmesg5.PNG){ #fig:002 width=60% height=60% }

# Выполнение заданий

![Тип Гипервизора](Screens/dmesg6.PNG){ #fig:002 width=60% height=60% }

# Выполнение заданий

![Тип файловой системы корневого раздела](Screens/root.PNG){ #fig:002 width=60% height=60% }


# Выполнение заданий

![Последовательность монтирования файловых систем](Screens/dmesg7.PNG){ #fig:002 width=60% height=60% }

# Заключение

Были приобретены навыки по установке и настройке ОС на виртуальной машине.