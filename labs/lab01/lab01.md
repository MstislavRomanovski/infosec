---
## Front matter
title: "Отчёт по лабораторной работе №1


Информационная безопасность"
subtitle: " Установка и конфигурация
операционной системы на виртуальную машину"
author: "Выполнил: Мальков Роман Сергеевич, 


НФИбд-02-21, 1032217048"



## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: Times New Roman
romanfont: Times New Roman
sansfont: Times New Roman
monofont: Times New Roman
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Целью данной работы является приобретение практических навыков установки операционной системы на виртуальную машину, настройки минимально необходимых для дальнейшей работы сервисов.


# Конфигурация виртуальной машины

Первым делом требуется предварительо загрузить сам дистрибутив с официального сайта, после загрузки дистрибутива, открываем приложение VirtualBox, 
а затем создаем и конфигурируем нвоую виртуальную машину (раздел Машина -> Создать). Даем название виртуальной машине, выбираем тип дистрибутива RedHat.

![Окно создания новой машины](Screens/conf.PNG){ #fig:002 width=60% height=60% }

Указываем размер оперативной памяти.

![Конфигурация оперативной памяти и числа ЦП](Screens/conf1.PNG){ #fig:002 width=60% height=60% }

Задаем конфигурацию жестокого диска.

![Конфигурация жеского диска](Screens/conf2.PNG){ #fig:002 width=60% height=60% }

Далее после создания машины необходимо создать виртуальный оптический диск и выбрать образ в котором содержится наш дистрибутив.

![Конфигурация оптического диска](Screens/conf3.PNG){ #fig:002 width=60% height=60% }

# Конфигурация установки ОС

Запускаем виртуальную машину, выбираем Install Rocky Linux 9.4.

![Установка](Screens/os1.PNG){ #fig:002 width=60% height=60% }

Выбираем язык - English.

![Выбор языка системы](Screens/os2.PNG){ #fig:002 width=60% height=60% }

Далее появится меню в котором нужно будет выбрать пункт Software Selection, в котором в свою очередь следует пометить галочкой пункт Development Tools.

![Выбор дополнительных опций для установки](Screens/os3.PNG){ #fig:002 width=60% height=60% }

Также необходимо настроить пользователя, логин назвать в соответствии с соглашение об именовании в разделе Create User. 

![Создание пользователя](Screens/os4.PNG){ #fig:002 width=60% height=60% }

Далее в разделе Installation Destination выбираем диск установки.

По выполнению данных действий производим окончательную установку.

# Задания

С помощью команды dmesg требуется найти:

1. Версию ядра Linux (Linux version).    
2. Частоту процессора (Detected Mhz processor).    
3. Модель процессора (CPU0).    
4. Объем доступной оперативной памяти (Memory available).    
5. Тип обнаруженного гипервизора (Hypervisor detected).     
6. Тип файловой системы корневого раздела.     
7. Последовательность монтирования файловых систем. 


1) 

![Версия ядра Linux](Screens/dmesg2.PNG){ #fig:002 width=60% height=60% }


2) 

![Частота процссора](Screens/dmesg3.PNG){ #fig:002 width=60% height=60% }

3) 

![Модель процессора](Screens/dmesg4.PNG){ #fig:002 width=60% height=60% }

4) 

![Объем доступной оперативной памяти](Screens/dmesg5.PNG){ #fig:002 width=60% height=60% }

5) 

![Тип Гипервизора](Screens/dmesg6.PNG){ #fig:002 width=60% height=60% }

6) 

![Тип файловой системы корневого раздела](Screens/root.PNG){ #fig:002 width=60% height=60% }


5) 

![Последовательность монтирования файловых систем](Screens/dmesg7.PNG){ #fig:002 width=60% height=60% }

# Заключение

Были приобретены навыки по установке и настройке ОС на виртуальной машине.