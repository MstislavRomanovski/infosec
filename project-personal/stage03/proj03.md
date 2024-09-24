---
## Front matter
title: "Индивидуальный проект. Отчёт о выполнении №3


Информационная безопасность"
subtitle: "Использование Hydra"
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

Научиться пользоваться утилитой hydra.

# Использование Hydra

Открываем DVWA, устанавливаем уровень сложности на low, и переходим в раздел Brute force, просматриваем код страницы. Это нужно для того чтобы определить ввод логина и пароля, для заполнения запроса при использовании hydra.

![DVWA html](Screens/Screenshot_1.PNG){ #fig:001 width=60% height=60% }

Введем какой либо неверный логин и пароль, а затем перейдем в раздел Network для просомтра Cookies, чтобы определить код сессии. 
Это нужно для того чтобы hydra могла остаться в рамках одной сессии, иначе страница будет обновляться, что приведет к исчезнвоению строки он неверно введенном пароле, по которому hydra и определяет верность ввода.

![DVWA Cookies](Screens/Screenshot_2.PNG){ #fig:002 width=60% height=60% }

Запрос выглядит следующим образом:

![Запрос](Screens/Screenshot_3.PNG){ #fig:003 width=60% height=60% }

Где первым параметром дается ip адрес, второй параметр -l admin задает логин пользователя, чей пароль мы пытаемся подобрать, -P /usr/share/wordlists/rockyou.txt.gz набор распространенных паролей, 
http-get-form запрос к серверу который определяется следующим оразом:

Путь к странице входа: /DVWA/valnirabilities/brute/

Тело ввода логина и пароля: username=^USER^&password=^PASS^&Login=Login

Сессия Cookie:H=Cookie:PHPSESSID=3l07a2ql2foefcv52e4mpfq8qa;security="low"

Текст информирующий о неверном вводе пароля: Username and/or password incorrect.

Выполняем команду, получаем пароль и проверяем

![Получение пароля](Screens/Screenshot_4.PNG){ #fig:004 width=60% height=60% }

![Успешный ввод](Screens/Screenshot_5.PNG){ #fig:005 width=60% height=60% }



# Заключение

Были полученны базовые навыки работы с утилитой hydra.

# Ссылки

using Hydra on Login pages with a right method: dvwa training: https://medium.com/@hamidullahbayram/using-hydra-on-login-pages-with-a-right-method-dvwa-training-1e85e8d4f5fd

DVWA Brute Force (Hydra): https://dmcxblue.net/2018/07/11/dvwa-brute-force-hydra/

Dictionary attack na formularz HTTP POST z THC-Hydra: https://haker.edu.pl/2016/01/25/http-post-dictionary-attack-hydra/