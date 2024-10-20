---
## Front matter
title: "Отчёт по лабораторной работе №8


Информационная безопасность"
subtitle: "Элементы
криптографии. Шифрование (кодирование)
различных исходных текстов одним ключом"
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

Освоить на практике применение режима однократного гаммирования разных текстов одним ключом.

# Выполнение лабораторной работы

Чтобы зашифровать два сообщения одним ключем они должны быть одной и той же длинны. После получения зашифрованных сообщений, 
положим что у атакующего есть некий шаблон сообщения который совпадает с нашим незашифрованным сообщением. 
Тогда посредством применения операции однократного гаммирования между двумя зашифрованными сообщениями и одним известным шаблоном, 
мы можем получить текст второго сообщения. 

Для решения задачи написан программный код:

![(рис. 1. Программный код приложения, реализующего режим однократного гаммирования)](image/Screenshot_1.PNG){ #fig:001 width=70% height=70% }

![(рис. 2. Программный код приложения, реализующего режим однократного гаммирования)](image/Screenshot_2.PNG){ #fig:002 width=70% height=70% }

![(рис. 3. Результат)](image/Screenshot_3.PNG){ #fig:003 width=70% height=70% }

![(рис. 4. Результат)](image/Screenshot_4.PNG){ #fig:004 width=70% height=70% }

# Вывод

В ходе выполнения данной лабораторной работы было освоено на практике применение режима однократного гаммирования к двум сообщениям.

# Список литературы. Библиография

[0] Методические материалы курса