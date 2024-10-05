---
## Front matter
title: "Индивидуальный проект. Отчёт о выполнении №4


Информационная безопасность"
subtitle: "Использование Nikto"
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

Рассмореть и применить утилиту nikto для просмотра уязвимостей веб приложения DVWA.

# Использование Nikto

Просмотрим версию nikto и проверим базы данных на ошибки.

![Проверка](Screens/Screenshot_1.PNG){ #fig:001 width=60% height=60% }

Попробуем просканировать DVWA

![сканирование DVWA](Screens/Screenshot_2.PNG){ #fig:002 width=60% height=60% }

Также дополнительно можно указать порт

![сканирование с указанием порта](Screens/Screenshot_3.PNG){ #fig:003 width=60% height=60% }

Укажем параметр maxtime, отвечающий за длительность работы сканирования, а также параметр Pause, отвечающий за паузу между вполнением запросов

![сканирования с maxtime и Pause](Screens/Screenshot_4.PNG){ #fig:004 width=60% height=60% }

При помощи параметра Tuning можно выбрать тип теста приложения:

0 - File Upload

1 - Interesting File / Seen in Logs

2 - Misconfiguration / Default File

3 - Information Disclosure

4 - (XSS/Script/HTML) Injection

5 - Remote file retrival Inside web root

6 - Denial of service

7 - Remote file retrival / Server wide

8 - Command exec / Remote shell

9 - SQL Injection

a - Authentication Bypass

b - Software Indetification

c - Remote source Inclusion

x - Reverse tuning options

![сканирование с Tuning](Screens/Screenshot_5.PNG){ #fig:005 width=60% height=60% }

Для того чтобы обойти систему обнаружения вторжения, можно воспользоваться параметром evasion:

1 - Random URI encoding

2 - Directory self reference (/./)

3 - Premature URL ending

4 - Prepend long random string

5 - Fake parameter

6 - TAB as request spacer

7 - Change case of URL

8 - Use Windows directory separator

![сканирование с evasion](Screens/Screenshot_6.PNG){ #fig:006 width=60% height=60% }

Сохраним отчет в определенном формате используя параметры o и Format

![Сохраним отчет](Screens/Screenshot_7.PNG){ #fig:007 width=60% height=60% }

![Отчет](Screens/Screenshot_8.PNG){ #fig:008 width=60% height=60% }



# Заключение

Были полученны базовые навыки работы с утилитой nikto.

# Ссылки

"Nikto vulnerability scanner: Complete guide": https://www.hackercoolmagazine.com/nikto-vulnerability-scanner-complete-guide/